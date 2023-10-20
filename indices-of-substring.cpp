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

    string text;
    string target;
    cin >> text;
    cin >> target;
    vector<int> indices;
    int len = target.length();
    int len2 = text.length();
    for (int i = 0; i < len2; i++) {
        if (text[i] == target[0] && i + len - 1 < len2) {
            int count = 0;
            for (int j = 0; j < len; j++) {
                if (text[i + j] == target[j]) {
                    count++;
                }
            }
            if (count == len) {
                indices.push_back(i);
            }
        }
    }
    for (int i = 0; i < indices.size(); i++) {
        cout << indices[i];
        if (i != indices.size() - 1) {
            cout << " ";
        }
    }
    if (indices.size() == 0) {
        cout << "\n";
    }
    return 0;
}
