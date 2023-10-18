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
void findWhiteAndBlack(string code, string guess, int &white, int &black) {
    int code_count[6] = {0};
    int guess_count[6] = {0};
    char color[] = {'R', 'O', 'Y', 'G', 'B', 'V'};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            if (code[i] == color[j]) {
                code_count[j]++;
            }
            if (guess[i] == color[j]) {
                guess_count[j]++;
            }
        }
    }
    for (int i = 0; i < 6; i++) {
        white += min(code_count[i], guess_count[i]);
    }
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            white--;
            black++;
        }
    }
}
int main() {
    string code, guess;
    while (cin >> code >> guess) {
        int white = 0, black = 0;
        findWhiteAndBlack(code, guess, white, black);
        cout << white << endl;
        cout << black << endl;
    }
    return 0;
}
