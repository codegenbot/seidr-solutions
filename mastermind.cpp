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
int main() {
    string code, guess;
    cin >> code >> guess;
    int white = 0, black = 0;
    int code_map[6] = {0};
    int guess_map[6] = {0};
    for (int i = 0; i < 4; i++) {
        code_map[code[i] - 'A']++;
        guess_map[guess[i] - 'A']++;
        if (code[i] == guess[i]) {
            black++;
        }
    }
    for (int i = 0; i < 6; i++) {
        white += min(code_map[i], guess_map[i]);
    }
    white -= black;
    cout << black << " " << white << endl;
    return 0;
}
