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
------X------------
output:
10
*/
int getScore(string str) {
    int score = 0;
    int index = 0;
    int frame = 0;
    while(frame < 10) {
        if (str[index] == 'X') {
            score += 10;
            if (str[index + 1] == 'X' && index + 1 < str.length() && frame < 9) {
                score += 10;
                if (str[index + 2] == 'X' && index + 2 < str.length() && frame < 8) {
                    score += 10;
                } else if (index + 2 < str.length()) {
                    score += str[index + 2] == '-' ? 0 : str[index + 2] - '0';
                }
            } else if (index + 1 < str.length()) {
                score += str[index + 1] == '/' ? 10 : str[index + 1] == '-' ? 0 : str[index + 1] - '0';
                if (str[index + 2] == '/' && index + 2 < str.length()) {
                    score += 10;
                } else if (index + 2 < str.length()) {
                    score += str[index + 2] == '-' ? 0 : str[index + 2] - '0';
                }
            }
            index += 1;
        } else if (str[index + 1] == '/') {
            score += 10;
            if (str[index + 2] == 'X' && index + 2 < str.length()) {
                score += 10;
            } else if (index + 2 < str.length()) {
                score += str[index + 2] == '-' ? 0 : str[index + 2] - '0';
            }
            index += 2;
        } else {
            score += str[index] == '-' ? 0 : str[index] - '0';
            score += str[index + 1] == '-' ? 0 : str[index + 1] - '0';
            index += 2;
        }
        frame++;
    }
    return score;
}
int main() {
    string str;
    cin >> str;
    cout << getScore(str) << endl;
    
    return 0;
}
