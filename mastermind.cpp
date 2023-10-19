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

int whitePegs(string code, string guess) {
    int cnt = 0;
    int len = code.length();
    int map[6] = {0};
    for (int i = 0; i < len; i++) {
        map[code[i] - 'A']++;
    }
    for (int i = 0; i < len; i++) {
        if (code[i] != guess[i] && map[guess[i] - 'A'] > 0) {
            cnt++;
            map[guess[i] - 'A']--;
        }
    }
    return cnt;
}

int blackPegs(string code, string guess) {
    int cnt = 0;
    int len = code.length();
    for (int i = 0; i < len; i++) {
        if (code[i] == guess[i]) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    string code = "RRRR";
    string guess = "RRRR";
    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);
    cout << white << " " << black << endl;
    return 0;
}
