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
Given a string, return the length of the longest substring without repeating characters.

Examples:

Given "abcabcbb", the answer is "abc", which the length is 3.

Given "bbbbb", the answer is "b", with the length of 1.

Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/
int main() {
    string s;
    cin >> s;
    int max = 0;
    int start = 0;
    int end = 0;
    map<char, int> m;
    while (end < s.size()) {
        if (m.find(s[end]) == m.end()) {
            m[s[end]] = end;
            end++;
        } else {
            if (end - start > max) {
                max = end - start;
            }
            start = m[s[end]] + 1;
            m.clear();
            for (int i = start; i < end; i++) {
                m[s[i]] = i;
            }
            m[s[end]] = end;
            end++;
        }
    }
    if (end - start > max) {
        max = end - start;
    } 
    cout << max << endl;
    return 0;
}
