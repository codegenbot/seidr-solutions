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
int white(string code, string guess) {
    int res = 0;
    int count[6];
    memset(count, 0, sizeof(count));
    for(int i = 0; i < 4; i++) {
        count[code[i] - 'A']++;
    }
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            res++;
            count[code[i] - 'A']--;
        }
    }
    for(int i = 0; i < 4; i++) {
        if(code[i] != guess[i] && count[guess[i] - 'A'] > 0) {
            res++;
            count[guess[i] - 'A']--;
        }
    }
    return res;
}
int main() {
    string code;
    string guess;
    cin >> code >> guess;
    cout << white(code, guess) << endl;
    cout << 4 - white(code, guess) << endl;
    return 0;
}
