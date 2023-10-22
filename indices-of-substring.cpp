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
int findString(string text, string target) {
    //loop through the text
    for (int i = 0; i < text.length() - target.length() + 1; i++) {
        bool textMatch = true;
        for (int j = 0; j < target.length(); j++) {
            if (text[i + j] != target[j]) {
                textMatch = false;
            }
        }
        if (textMatch == true) {
            return i;
        }
    }
    return -1;
}
int main() {
    string text = "hi";
    string target = "hihihihihihihihihihi";
    int indexFound = 0;
    int ret = findString(text, target);
    while (ret != -1) {
        cout << ret << "\t";
        text = target.substr(target.length() -1);
        target = target.substr(0, target.length() - 1);
        ret = findString(text, target);
    }
}
