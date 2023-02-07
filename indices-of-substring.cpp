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
    string text, target;
    while (cin >> text >> target) {
        int n = text.size(), m = target.size();
        if (m > n) {
            cout << "0" << endl;
            continue;
        }
        vector<int> next(m, -1);
        for (int i = 1, j = -1; i < m; i++) {
            while (j != -1 && target[j + 1] != target[i]) j = next[j];
            if (target[j + 1] == target[i]) j++;
            next[i] = j;
        }
        vector<int> ans;
        for (int i = 0, j = -1; i < n; i++) {
            while (j != -1 && target[j + 1] != text[i]) j = next[j];
            if (target[j + 1] == text[i]) j++;
            if (j == m - 1) {
                ans.push_back(i - m + 1);
                j = next[j];
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
