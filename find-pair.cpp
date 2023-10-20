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
Given a vector of integers, return the two elements that sum to a target integer.
For example,
input:
2
5 7
12
output:
5
7
input:
2
2500 6352
8852
output:
2500
6352
input:
2
-14 5
-9
output:
-14
5
input:
2
40 -19
21
output:
40
-19
input:
2
-4 4
0
output:
-4
4
*/
void twoSum(vector<int>& nums, int target) {
    map<int, int> m;
    map<int, int>::iterator it;
    for (int i = 0; i < nums.size(); i++) {
        m[nums[i]] = i;
    }
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        it = m.find(complement);
        if (it != m.end() && it->second != i) {
            cout << nums[i] << " " << nums[it->second] << endl;
            return;
        }
    }
}
int main() {
    vector<int> nums;
    int n, target, temp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        nums.push_back(temp);
    }
    cin >> target;
    twoSum(nums, target);
}
