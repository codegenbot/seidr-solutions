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
57
input:
2
2500 6352
8852
output:
25006352
input:
2
-14 5
-9
output:
-145
input:
2
40 -19
21
output:
40-19
input:
2
-4 4
0
output:
-44
*/

int get_sum(vector<int>& nums, int target) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
    }
    return sum;
}

void print_vector(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
    }
    cout << endl;
}

void print_vector_vector(vector<vector<int>>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        print_vector(nums[i]);
    }
}

void get_combination(vector<int>& nums, int target, vector<int>& cur, vector<vector<int>>& res) {
    if (get_sum(cur, target) == target) {
        res.push_back(cur);
        return;
    }
    if (get_sum(cur, target) > target) {
        return;
    }
    for (int i = 0; i < nums.size(); i++) {
        cur.push_back(nums[i]);
        get_combination(nums, target, cur, res);
        cur.pop_back();
    }
}

vector<vector<int>> get_combination(vector<int>& nums, int target) {
    vector<vector<int>> res;
    vector<int> cur;
    get_combination(nums, target, cur, res);
    return res;
}

void print_combination(vector<int>& nums, int target) {
    vector<vector<int>> res = get_combination(nums, target);
    print_vector_vector(res);
}

int main() {
    vector<int> nums = {5, 7};
    int target = 12;
    print_combination(nums, target);
    return 0;
}
