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
1
0
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
12
0 1 2 3 4 5 6 7 8 9 10 11
*/
int main() {
    string text, target;
    while (getline(cin, text)) {
        getline(cin, target);
        int n = text.length();
        int m = target.length();
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (text[i] == target[0]) {
                int k = i;
                int j = 0;
                while (text[k] == target[j] && k < n && j < m) {
                    k++;
                    j++;
                }
                if (j == m) {
                    ans.push_back(i);
                }
            }
        }
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i];
            if (i != ans.size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
