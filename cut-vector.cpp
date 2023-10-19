#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible. Return the two resulting subvectors as two outputs.
For example,
input:
1
0
output:
1
0
0

input:
1
10
output:
1
10
0

input:
1
100
output:
1
100
0

input:
1
1000
output:
1
1000
0

input:
1
10000
output:
1
10000
0

*/
bool isTheSame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    map<int, int> aa;
    for (int i : a) {
        if (aa.count(i)) {
            aa[i]++;
        } else {
            aa[i] = 1;
        }
    }
    map<int, int> bb;
    for (int i : b) {
        if (bb.count(i)) {
            bb[i]++;
        } else {
            bb[i] = 1;
        }
    }
    for (auto i : aa) {
        if (i.second != bb[i.first]) {
            return false;
        }
    }
    return true;
}
vector<int> part_1(vector<int> nums, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }
    vector<int> res;
    res.push_back(sum);
    for (int i = k; i < nums.size(); i++) {
        sum -= nums[i - k];
        sum += nums[i];
        res.push_back(sum / k);
    }
    return res;
}
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    vector<int> index;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        if (nums[i] == 0) {
            index.push_back(i);
        }
    }
    if (index.empty()) {
        for (int i = 0; i < n; i++) {
            cout << nums[i] << endl;
        }
        return 0;
    }
    if (index.size() == 1) {
        nums.insert(nums.begin() + index[0] + 1, 1);
    }
    int start = 0;
    int end = n + 1;
    for (start = 0; start < n + 1; start++) {
        for (end = n + 2; end >= start + 1; end--) {
            if (isTheSame(nums, part_1(nums, end - start))) {
                break;
            }
        }
        if (end > start + 1) {
            break;
        }
    }
    if (start == n + 1) {
        for (int i = 0; i < n; i++) {
            cout << nums[i] << endl;
        }
        return 0;
    }
    for (int i = 0; i < start; i++) {
        cout << nums[i] << endl;
    }
    cout << 1 << endl;
    for (int i = end; i < n + 2; i++) {
        cout << nums[i] << endl;
    }
}
