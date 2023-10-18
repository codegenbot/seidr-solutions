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
0\n

input:
!
!
output:
1 0\n
input:
r
nm,xcnwqnd@#$fwkdjn3
output:
0\n

input:
hi
hihihihihihihihihihi
output:
0\n

input:
############
#
output:
12\n
0 1 2 3 4 5 6 7 8 9 10 11\n
*/
int main() {
    string text, target;
    getline(cin, text);
    getline(cin, target);
    int len = target.length();
    int len2 = text.length();
    int i = 0;
    while (i < len2) {
        if (text[i] == target[0]) {
            int j = 1;
            while (j < len && text[i+j] == target[j]) {
                j++;
            }
            if (j == len) {
                cout << i << " ";
            }
        }
        i++;
    }
    cout << endl;
    return 0;
}
