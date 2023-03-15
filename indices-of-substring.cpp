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
    cin >> text >> target;
    if (text.length() == 0) return 0;
    vector<int> result;
    int len = target.length();
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == target[0]) {
            bool flag = true;
            for (int j = 0; j < len; j++) {
                if (i + j >= text.length() || text[i + j] != target[j]) {
                    flag = false;
                    break;
                }
            }
            if (flag) result.push_back(i);
        }
    }
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) cout << " ";
    }
    if (result.size() == 0) cout << 0 << endl;
    cout << endl;
    return 0;
}
