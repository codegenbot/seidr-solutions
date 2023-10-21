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
Given a string representing the individual bowls in a 10-frame round of 10 pin bowling, return the score of that round.
For example,
input:
--------------------
output:
0
input:
XXXXXXXXXXXX
output:
300
input:
5/5/5/5/5/5/5/5/5/5/5
output:
150
input:
7115XXX548/279-X53
output:
145
input:
532/4362X179-41447/5
output:
100
*/
int main() {
    string str;
    cin >> str;
    int result = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'X') {
            result += 10;
            int k = 0;
            while (i + k + 1 < str.size()) {
                result += getNumber(str[i + k + 1]);
                if (str[i + k + 1] == '/' || str[i + k + 1] == 'X') {
                    break;
                } else {
                    k++;
                }
            }
        } else if (str[i] == '/') {
            result += getNumber(str[i - 1]);
            result += getNumber(str[i + 1]);
        } else {
            result += getNumber(str[i]);
        }
    }
    cout << result << endl;
}
