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
    string a;
    string b;
    getline(cin, a);
    getline(cin, b);
    vector<int> res;
    res.push_back(0);
    for (int i = 1; i < b.length(); i++) {
        int j = res[i - 1];
        while (j > 0 && b[i] != b[j]) {
            j = res[j - 1];
        }
        if (b[i] == b[j]) {
            j++;
        }
        res.push_back(j);
    }
    int j = 0;
    for (int i = 0; i < a.length(); i++) {
        while (j > 0 && a[i] != b[j]) {
            j = res[j - 1];
        }
        if (a[i] == b[j]) {
            j++;
        }
        if (j == b.length()) {
            cout << i - j + 1 << " ";
            j = res[j - 1];
        }
    }
    cout << endl;
    return 0;
}
