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
Based on the board game Mastermind. Given a Mastermind code and a guess, each of which are 4-character strings consisting of 6 possible characters, return the number of white pegs (correct color, wrong place) and black pegs (correct color, correct place) the codemaster should give as a clue.
For example,
input:
RRRR
RRRR
output:
0
4
input:
BOYG
GYOB
output:
4
0
input:
WYYW
BBOG
output:
0
0
input:
GGGB
BGGG
output:
2
2
input:
BBBB
OOOO
output:
0
0
*/

int blackPeg(string code, string guess) {
    int count = 0;
    for (int i = 0; i < code.size(); i++) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int whitePeg(string code, string guess) {
    int count = 0;
    int codeMap[6] = {0};
    int guessMap[6] = {0};
    for (int i = 0; i < code.size(); i++) {
        if (code[i] == guess[i]) {
            continue;
        }
        if (code[i] == 'B') {
            codeMap[0]++;
        }
        if (code[i] == 'G') {
            codeMap[1]++;
        }
        if (code[i] == 'O') {
            codeMap[2]++;
        }
        if (code[i] == 'R') {
            codeMap[3]++;
        }
        if (code[i] == 'W') {
            codeMap[4]++;
        }
        if (code[i] == 'Y') {
            codeMap[5]++;
        }
        if (guess[i] == 'B') {
            guessMap[0]++;
        }
        if (guess[i] == 'G') {
            guessMap[1]++;
        }
        if (guess[i] == 'O') {
            guessMap[2]++;
        }
        if (guess[i] == 'R') {
            guessMap[3]++;
        }
        if (guess[i] == 'W') {
            guessMap[4]++;
        }
        if (guess[i] == 'Y') {
            guessMap[5]++;
        }
    }
    for (int i = 0; i < 6; i++) {
        count += min(codeMap[i], guessMap[i]);
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << blackPeg(code, guess) << " " << whitePeg(code, guess) << endl;
}
