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
input:a
a
5
output:
0
input:
!
!
output:
10
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
120 1 2 3 4 5 6 7 8 9 10 11 
*/
int main() {
    string a, b;
    while (getline(cin, a)) {
        getline(cin, b);
        int lena = a.size();
        int lenb = b.size();
        if (lena < lenb) {
            printf("0\n");
            continue;
        }
        int total = 0;
        for (int i = 0; i <= lena - lenb; i++) {
            bool flag = true;
            for (int j = 0; j < lenb; j++) {
                if (a[i + j] != b[j]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                total++;
                printf("%d", i);
                if (i < lena - lenb)
                    printf(" ");
            }
        }
        if (total == 0)
            printf("0");
        printf("\n");
    }
    return 0;
}
