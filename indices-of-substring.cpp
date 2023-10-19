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
    getline(cin, text);
    getline(cin, target);
    if (text.length() < target.length()) {
        cout << -1 << endl;
        return 0;
    }
    vector<int> ans;
    for (int i = 0; i < text.length() - target.length() + 1; i++) {
        for (int j = 0; j < target.length(); j++) {
            if (text[i + j] != target[j]) {
                break;
            }
            if (j == target.length() - 1) {
                ans.push_back(i);
            }
        }
    }
    if (ans.size() == 0) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
