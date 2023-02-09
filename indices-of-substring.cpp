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
        int len = t.size();
        int cnt = 0;
        int i = 0;
        while (i < s.size()) {
            if (s[i] == t[0]) {
                int j = 0;
                while (j < len && i + j < s.size() && s[i + j] == t[j]) {
                    j++;
                }
                if (j == len) {
                    cnt++;
                    i += j;
                } else {
                    i++;
                }
            } else {
                i++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
