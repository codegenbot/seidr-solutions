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
#include <sstream>
using namespace std;
/*
Given a vector of integers, return the two elements that sum to a target integer. 
For example,
input:
3
5 7 12
19
output:
5 7
input:
3
2500 6352 8852
11354
output:
2500 6352
input:
3
-14 5 -9
-4
output:
-14 5
input:
3
40 -19 21
22
output:
40 -19
input:
3
-4 4 0
0
output:
-4 4
*/

int find(vector<int>& nums, int target) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) { 
                return nums[i] + nums[j];
            }
        }
    }
}

int main() {
    int n = 0;
    string s, str;
    vector<int> nums;
    while (getline(cin, s)) {
        if (n == 0) {
            n = stoi(s);
        } else {
            stringstream ss;
            ss << s;
            int num;
            while (ss >> num) {
                nums.push_back(num);
            }
        }
    }
    int target = nums[nums.size() - 1];
    int result = find(nums, target);
    cout << result;
    return 0;
}
