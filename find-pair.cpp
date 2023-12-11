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
int findPair(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (complement >= 0 && binary_search(nums.begin(), nums.end(), complement)) {
            return nums[i];
        }
    }
    return -1;
}
int main() {
    vector<int> nums = {5, 7};
    int target = 12;
    int result = findPair(nums, target);
    cout << "Result: " << result << endl;
    return 0;
}