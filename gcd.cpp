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
Given two integers, return the largest integer that divides each of the integers evenly. Indices of Substring (CW) Given a text string and a target string, return a vector of integers of the indices at which the target appears in the text. If the target string overlaps itself in the text, all indices (including those overlapping) should be returned.
For example,
input:
1
1
output:
1
input:
4
400000
output:
4
input:
54
24
output:
6
input:
4200
3528
output:
168
input:
820000
63550
output:
2050
*/
vector<int> gcd(vector<int> nums) {
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        int g = nums[i];
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[j] % g == 0) {
                result.push_back(g);
                break;
            }
        }
    }
    return result;
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for (int i = 0; i < text.size(); i++) {
        if (text[i] == target[0]) {
            int j = 1;
            while (j < target.size() && text[i + j] == target[j]) {
                j++;
            }
            if (j == target.size()) {
                result.push_back(i);
            }
        }
    }
    return result;
}