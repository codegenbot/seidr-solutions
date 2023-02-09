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
    while (getline(cin, s)) {
        getline(cin, t);
        vector<int> ans;
        if (s.size() < t.size()) {
            cout << "0" << endl;
            continue;
        }
        for (int i = 0; i < s.size() - t.size() + 1; i++) {
            if (s.substr(i, t.size()) == t) {
                ans.push_back(i);
            }
        }
        if (ans.size() == 0) {
            cout << "0" << endl;
            continue;
        }
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
