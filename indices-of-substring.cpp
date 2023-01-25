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
    string target, text;
    while (cin >> target >> text) {
        vector<int> res;
        int n = target.size();
        int m = text.size();
        for (int i = 0; i <= m - n; i++) {
            if (target == text.substr(i, n)) {
                res.push_back(i);
                i += n - 1;
            }
        }
        for (int i = 0; i < res.size(); i++) {
            if (i == 0) {
                cout << res[i];
            } else {
                cout << " " << res[i];
            }
        }
        cout << endl;
    }
}
