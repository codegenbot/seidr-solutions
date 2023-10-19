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
    int len = target.length();
    int count = 0;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == target[0]) {
            bool flag = true;
            for (int j = 0; j < len; j++) {
                if (text[i + j] != target[j]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                cout << i << " ";
                count++;
            }
        }
    }
    if (count == 0) {
        cout << -1 << endl;
    } else {
        cout << endl;
    }
    return 0;
}
