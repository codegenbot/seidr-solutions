#include <iostream>
#include <string>
#include <cstring>
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
int getScore(string input) {
    int score = 0;
    int currFrame = 0;
    int currThrow = 0;
    int currScore = 0;
    for (int i=0; i<input.size(); i++) {
        if (currThrow == 0) {
            if (input[i] == 'X') {
                currScore += 10;
                if (currFrame < 9)
                    currFrame++;
            } else if (input[i] == '-')
                currScore += 0;
            else
                currScore += input[i]-'0';
            currThrow++;
        } else if (currThrow == 1) {
            if (currFrame < 10) {
                if (input[i] == '/') {
                    currScore = 10;
                    if (currFrame < 9)
                        currFrame++;
                } else if (input[i] == 'X') {
                    currScore += 10;
                    if (currFrame < 9)
                        currFrame++;
                } else if (input[i] == '-')
                    currScore += 0;
                else
                    currScore += input[i]-'0';
                score += currScore;
                if (currFrame < 10)
                    currFrame++;
                currScore = 0;
                currThrow = 0;
            }
        }
    }
    return score;
}
int main() {
    cout << getScore("XXXXXXXXXXXX") << endl;
    cout << getScore("5/5/5/5/5/5/5/5/5/5/5") << endl;
    cout << getScore("7115XXX548/279-X53") << endl;
    cout << getScore("532/4362X179-41447/5") << endl;
}
