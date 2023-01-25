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
    string str, target;
    while (cin >> str >> target) {
        vector<int> ans;
        int len = str.length();
        int len1 = target.length();
        for (int i = 0; i < len; i++) {
            if (str[i] == target[0]) {
                int k = i;
                bool find = true;
                for (int j = 0; j < len1; j++) {
                    if (str[k] != target[j]) {
                        find = false;
                        break;
                    }
                    k++;
                }
                if (find) {
                    ans.push_back(i);
                }
            }
        }
        for (int i = 0; i < ans.size(); i++) {
            if (i == 0) {
                cout << ans[i];
            } else {
                cout << " " << ans[i];
            }
        }
        if (ans.size() == 0) {
            cout << 0;
        }
        cout << endl;
    }
    return 0;
}
