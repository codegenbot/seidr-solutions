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
04
input:
BOYG
GYOB
output:
40
input:
WYYW
BBOG
output:
00
input:
GGGB
BGGG
output:
22
input:
BBBB
OOOO
output:
00
*/
int main() {
    char code[5];
    char guess[5];
    int black = 0, white = 0;
    int code_count[6] = {0};
    int guess_count[6] = {0};
    scanf("%s", code);
    scanf("%s", guess);
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
        else {
            switch (code[i]) {
                case 'B':
                    code_count[0]++;
                    break;
                case 'G':
                    code_count[1]++;
                    break;
                case 'O':
                    code_count[2]++;
                    break;
                case 'R':
                    code_count[3]++;
                    break;
                case 'Y':
                    code_count[4]++;
                    break;
                case 'W':
                    code_count[5]++;
                    break;
            }
            switch (guess[i]) {
                case 'B':
                    guess_count[0]++;
                    break;
                case 'G':
                    guess_count[1]++;
                    break;
                case 'O':
                    guess_count[2]++;
                    break;
                case 'R':
                    guess_count[3]++;
                    break;
                case 'Y':
                    guess_count[4]++;
                    break;
                case 'W':
                    guess_count[5]++;
                    break;
            }
        }
    }
    for (int i = 0; i < 6; i++) {
        white += min(code_count[i], guess_count[i]);
    }
    printf("%d%d\n", black, white);
    return 0;
}
