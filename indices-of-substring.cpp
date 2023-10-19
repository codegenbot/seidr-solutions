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
    while (true) {
        string text, target;
        getline(cin, text);
        getline(cin, target);
        if (text == "" || target == "") break;
        int n = text.size(), m = target.size();
        vector<int> next(m, -1);
        for (int i = 1; i < m; i++) {
            int j = next[i - 1];
            while (j != -1 && target[j + 1] != target[i]) j = next[j];
            if (target[j + 1] == target[i]) next[i] = j + 1;
        }
        int j = -1;
        for (int i = 0; i < n; i++) {
            while (j != -1 && target[j + 1] != text[i]) j = next[j];
            if (target[j + 1] == text[i]) j++;
            if (j == m - 1) {
                cout << i - m + 1 << " ";
                j = next[j];
            }
        }
        cout << endl;
    }
    return 0;
}
