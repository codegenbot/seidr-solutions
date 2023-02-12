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
Given a string, return the length of the longest substring that contains only unique characters.
For example, given the string “abcabcbb”, the longest substring that contains only unique characters is “abc”.
Given the string “bbbbb”, the longest substring that contains only unique characters is “b”.
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
        }
    }
    if (end - start > max) {
        max = end - start;
    } 
    cout << max << endl;
    return 0;
}
