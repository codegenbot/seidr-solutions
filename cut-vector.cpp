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

// 方法一：暴力解法，遍历每一个位置，找到左右两边的和，然后比较
// 方法二：先求出整个数组的和，然后遍历每一个位置，求出左边的和，然后求出右边的和，然后比较
// 方法三：先求出整个数组的和，然后遍历每一个位置，求出左边的和，然后求出右边的和，然后比较

// 方法一：暴力解法，遍历每一个位置，找到左右两边的和，然后比较
void find_min_diff(vector<int> &vec) {
    int min_diff = INT_MAX;
    int min_index = -1;
    for (int i = 0; i < vec.size(); i++) {
        int left_sum = 0;
        int right_sum = 0;
        for (int j = 0; j < i; j++) {
            left_sum += vec[j];
        }
        for (int j = i + 1; j < vec.size(); j++) {
            right_sum += vec[j];
        }
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            min_index = i;
        }
    }
    for (int i = 0; i < vec.size(); i++) {
        if (i == min_index) {
            cout << 0 << endl;
        } else {
            cout << vec[i] << endl;
        }
    }
}

// 方法二：先求出整个数组的和，然后遍历每一个位置，求出左边的和，然后求出右边的和，然后比较
void find_min_diff2(vector<int> &vec) {
    int sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];
    }
    int min_diff = INT_MAX;
    int min_index = -1;
    for (int i = 0; i < vec.size(); i++) {
        int left_sum = 0;
        for (int j = 0; j < i; j++) {
            left_sum += vec[j];
        }
        int right_sum = sum - left_sum - vec[i];
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            min_index = i;
        }
    }
    for (int i = 0; i < vec.size(); i++) {
        if (i == min_index) {
            cout << 0 << endl;
        } else {
            cout << vec[i] << endl;
        }
    }
}

// 方法三：先求出整个数组的和，然后遍历每一个位置，求出左边的和，然后求出右边的和，然后比较
void find_min_diff3(vector<int> &vec) {
    int sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];
    }
    int min_diff = INT_MAX;
    int min_index = -1;
    int left_sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        int right_sum = sum - left_sum - vec[i];
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            min_index = i;
        }
        left_sum += vec[i];
    }
    for (int i = 0; i < vec.size(); i++) {
        if (i == min_index) {
            cout << 0 << endl;
        } else {
            cout << vec[i] << endl;
        }
    }
}

int main() {
