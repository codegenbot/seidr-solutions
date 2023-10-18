#include <algorithm>
#include <climits>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <stdio.h>
#include <stack>
#include <vector>
using namespace std;
/*
    Given a string, find the length of the longest substring without repeating characters.
    Example:
    The longest substring without repeating letters for "abcabcbb" is "abc", which the length is 3.
    For "bbbbb" the longest substring is "b", with the length of 1.
*/
int main() {
    string s;
    cin >> s;
    int len = s.size();
    int ans = 0;
    int start = 0;
    map<char, int> m;
    for(int i = 0; i < len; i++) {
        if(m.find(s[i]) != m.end()) {
            start = max(start, m[s[i]] + 1);
        }
        ans = max(ans, i - start + 1);
        m[s[i]] = i;
    }
    cout << ans << endl;
    return 0;
}
