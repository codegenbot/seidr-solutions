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
    
    int len = text.length();
    int tlen = target.length();
    int i, j;
    int cnt = 0;
    for(i = 0; i < len; i++) {
        if(text[i] == target[0]) {
            cnt++;
        }
    }
    cout << cnt << endl;
    for(i = 0; i < len; i++) {
        if(text[i] == target[0]) {
            for(j = 0; j < tlen; j++) {
                if(i + j >= len) {
                    break;
                }
                if(text[i + j] != target[j]) {
                    break;
                }
                if(j == tlen - 1) {
                    cout << i << " ";
                }
            }
        }
    }
    return 0;
}
