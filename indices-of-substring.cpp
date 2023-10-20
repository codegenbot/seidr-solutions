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
a\n5
output:
0\n

input:
!\n!
output:
1\n0\n
input:
r\nnm,xcnwqnd@#$fwkdjn3
output:
0\n

input:
hi\nhihihihihihihihihihi
output:
0\n

input:
############\n#
output:
12\n0 1 2 3 4 5 6 7 8 9 10 11\n
*/
int main() {
    string str, target;
    getline(cin, str);
    getline(cin, target);
    int index = 0;
    for(int i = 0; i < str.length(); i++) {
        int j = 0;
        for(; j < target.length() && i + j < str.length(); j++) {
            if(str[i + j] != target[j]) {
                break;
            }
        }
        if(j == target.length()) {
            cout << i << " ";
        }
    }
    cout << "\n";
    return 0;
}
