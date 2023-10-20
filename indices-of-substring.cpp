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
    int len = target.size();
    int lenT = text.size();
    int i = 0, j = 0;
    while(i < lenT) {
        if(text[i] == target[j]) {
            if(j == len - 1) {
                cout << i - len + 1 << " ";
                j = 0;
                i = i - len + 1 + 1;
            } else {
                i++;
                j++;
            }
        } else {
            i++;
            j = 0;
        }
    }
    return 0;
}
