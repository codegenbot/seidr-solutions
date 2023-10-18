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

int black_peg(string code, string guess) {
    int result = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            result++;
        }
    }
    return result;
}

int white_peg(string code, string guess) {
    int result = 0;
    map<char, int> code_map;
    map<char, int> guess_map;
    for (int i = 0; i < 4; i++) {
        code_map[code[i]]++;
        guess_map[guess[i]]++;
    }
    for (int i = 0; i < 4; i++) {
        if (code_map[guess[i]] > 0) {
            result++;
            code_map[guess[i]]--;
        }
    }
    return result - black_peg(code, guess);
}

int main() {
    string code;
    string guess;
    cin >> code >> guess;
    cout << white_peg(code, guess) << endl;
    cout << black_peg(code, guess) << endl;
    return 0;
}
