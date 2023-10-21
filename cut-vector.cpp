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
int main() {
    int n;
    while(cin >> n) {
        int sum = 0;
        vector<int> nums;
        for(int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            sum += tmp;
            nums.push_back(tmp);
        }
        int left = 0, right = sum;
        int mid = (left + right) / 2;
        while(left <= right) {
            int tmp = 0;
            for(int i = 0; i < n; i++) {
                if(tmp + nums[i] > mid) {
                    tmp = nums[i];
                } else {
                    tmp += nums[i];
                }
            }
            if(tmp > mid) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
            mid = (left + right) / 2;
        }
        int tmp = 0;
        for(int i = 0; i < n; i++) {
            if(tmp + nums[i] > mid) {
                cout << tmp << endl;
                tmp = nums[i];
            } else {
                tmp += nums[i];
            }
        }
        cout << tmp << endl;
        cout << mid << endl;
    }
    return 0;
}
