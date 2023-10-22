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
    int res = 0;
    string text, target;
    cin >> text >> target;
    for (int i = 0; i < text.size(); i++) {
        for (int j = 0; j < target.size(); j++) {
            if (target[j] != text[i+j]) break;
            if (j == target.size()-1) {
                res++;
                cout << i << " ";
            }
        }
    }
    cout << res << endl;
    return 0;
}
