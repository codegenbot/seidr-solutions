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
100
input:
1
10
output:
1100
input:
1
100
output:
11000
input:
1
1000
output:
110000
input:
1
10000
output:
1100000
*/

//solution 1
vector<int> find_cut(vector<int> &v) {
    int len = v.size();
    vector<int> ret;
    int sum = 0;
    for(int i = 0; i < len; i++) {
        sum += v[i];
    }
    int left = 0;
    int right = sum;
    int min_gap = INT_MAX;
    int min_index = 0;
    for(int i = 0; i < len; i++) {
        left += v[i];
        right -= v[i];
        int gap = abs(left - right);
        if(gap < min_gap) {
            min_gap = gap;
            min_index = i;
        }
    }
    ret.push_back(min_index);
    ret.push_back(min_gap);
    return ret;
}

//solution 2
vector<int> find_cut(vector<int> &v) {
    int len = v.size();
    vector<int> ret;
    int sum = 0;
    for(int i = 0; i < len; i++) {
        sum += v[i];
    }
    int left = 0;
    int right = sum;
    int min_gap = INT_MAX;
    int min_index = 0;
    for(int i = 0; i < len; i++) {
        left += v[i];
        int gap = abs(left - right);
        if(gap < min_gap) {
            min_gap = gap;
            min_index = i;
        }
        right -= v[i];
    }
    ret.push_back(min_index);
    ret.push_back(min_gap);
    return ret;
}

//solution 3
vector<int> find_cut(vector<int> &v) {
    int len = v.size();
    vector<int> ret;
    int sum = 0;
    for(int i = 0; i < len; i++) {
        sum += v[i];
    }
    int left = 0;
    int right = sum;
    int min_gap = INT_MAX;
    int min_index = 0;
    for(int i = 0; i < len; i++) {
        left += v[i];
        int gap = abs(left - right);
        if(gap < min_gap) {
            min_gap = gap;
            min_index = i;
        }
    }
    ret.push_back(min_index);
    ret.push_back(min_gap);
    return ret;
}

//solution 4
vector<int> find_cut(vector<int> &v) {
    int len = v.size();
    vector<int> ret;
    int sum = 0;
    for(int i = 0; i < len; i++) {
        sum += v[i];
    }
    int left = 0;
    int right = sum;
    int min_gap = INT_MAX;
    int min_index = 0;
    for(int i = 0; i < len; i++) {
        left += v[i];
        int gap = abs(left - right);
        if(gap < min_gap) {
            min_gap = gap;
            min_index = i;
        }
    }
    ret.push_back(min_index);
    ret.push_back(min_gap);
    return ret;
}

int main() {
