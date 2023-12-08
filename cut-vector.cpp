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

vector<int> cutVector(const vector<int>& input) {
    int n = input.size();
    if (n == 0) return {};
    if (n == 1) return {input[0], 0};
    if (n == 2) return {input[0], input[1]};
    
    vector<int> left, right;
    int minDiff = INT_MAX;
    for (int i = 1; i < n - 1; i++) {
        int diff = abs(input[i] - input[i - 1]);
        if (diff < minDiff) {
            left.clear();
            right.clear();
            minDiff = diff;
        }
        if (diff == minDiff) {
            left.push_back(input[i - 1]);
            right.push_back(input[i]);
        }
    }
    
    return {left, right};
}