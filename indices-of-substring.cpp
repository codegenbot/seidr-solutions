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
Given a text string and a target string, return a list of integers of the indices at which the target appears in the text. Targets may overlap.
For example,
input:
a
5
output:
0
input:
!
!
output:
10
input:
r
nm,xcnwqnd@#$fwkdjn3
output:
0
input:
hi
hihihihihihihihihihi
output:
0
input:
############
#
output:
120 1 2 3 4 5 6 7 8 9 10 11
*/
int main() {
    string s, t;
    while (cin >> s >> t) {
        int n = s.size(), m = t.size();
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (s[i] == t[0]) {
                int j = 0;
                for (; j < m; j++) {
                    if (s[i + j] != t[j]) break;
                }
                if (j == m) ans.push_back(i);
            }
        }
        for (int i = 0; i < ans.size(); i++) {
            if (i) cout << " ";
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}
