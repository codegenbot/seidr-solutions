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
int main() {
    int n, target;
    while (cin >> n >> target) {
        vector<int> nums(n);
        for (int i = 0; i < n; i++) cin >> nums[i];
        sort(nums.begin(), nums.end());
        vector<int> res;
        int i = 0, j = n - 1;
        while (i < j) {
            if (nums[i] + nums[j] < target) i++;
            else if (nums[i] + nums[j] > target) j--;
            else {
                res.push_back(nums[i]);
                res.push_back(nums[j]);
                break;
            }
        }
        for (int k = 0; k < res.size(); k++) cout << res[k] << ' ';
        cout << endl;
    }
    return 0;
}
