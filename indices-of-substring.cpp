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
int strStr(char * haystack, char * needle){
    int m = strlen(haystack);
    int n = strlen(needle);
    if (n == 0) return 0;
    if (m == 0) return -1;
    if (n > m) return -1;
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (haystack[i + j] != needle[j]) break;
        }
        if (j == n) return i;
    }
    return -1;
}
int main() {
    char haystack[] = "aaaaaaaaa";
    char needle[] = "aaaaaaaaa";
    cout << strStr(haystack, needle) << endl;
}
