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
Given a string, return the length of the longest substring that does not contain any repeated characters.

Examples:

input: “abcabcbb”
output: 3

input: “bbbbb”
output: 1

input: “pwwkew”
output: 3

input: “”
output: 0

input: “abcabcdbb”
output: 4
*/
int main() {
    string s;
    cin >> s;
    int res = 0;
    int start = 0;
    int end = 0;
    map<char, int> m;
    while (end < s.size()) {
        if (m.find(s[end]) == m.end()) {
            m[s[end]] = end;
            end++;
        } else {
            res = max(res, end - start);
            start = m[s[end]] + 1;
            m.clear();
        }
    }
    res = max(res, end - start);
    cout << res << endl;
    return 0;
}
