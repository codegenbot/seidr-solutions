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
!\n!
output:
1\n0

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
    getline(cin, text, '\n');
    getline(cin, target, '\n');
    int len = target.length();
    int len2 = text.length();
    int i = 0;
    bool found = false;
    while (i <= len2 - len) {
        int j = 0;
        while (j < len && text[i+j] == target[j]) {
            j++;
        }
        if (j == len) {
            cout << i << " ";
            found = true;
            if (i == len2 - len) {
                cout << endl;
                return 0;
            }
        } else {
            i++;
        }
    }
    if (!found) cout << 0 << endl;
    else cout << endl;
    return 0;
}
