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
    string str;
    string target;
    while (cin >> str >> target) {
        vector<int> ans;
        int len = target.length();
        for (int i = 0; i < str.length(); i++) {
            if (str.substr(i, len) == target) {
                ans.push_back(i);
            }
        }
        for (int i = 0; i < ans.size(); i++) {
            if (i == ans.size() - 1) {
                cout << ans[i] << endl;
            } else {
                cout << ans[i] << " ";
            }
        }
    }
    return 0;
}
