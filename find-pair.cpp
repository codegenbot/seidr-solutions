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
3
5 7
-1
12 
output:
57
input:
3
2500 6352
-1
8852 
output:
25006352
input:
3
-14 5
-1
-9 
output:
-145
input:
3
40 -19
-1
21 
output:
40-19
input:
3
-4 4
-1
0 
output:
-44
*/

int find(vector<int>& nums, int target) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 2; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                return nums[i] * pow(10, (int)log10(nums[j]) + 1) + nums[j];
            }
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    cout << find(nums, target) << endl;
    return 0;
}
