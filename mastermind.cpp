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
// make sure that RRRR\nRRRR -> 0\n4 

int white(string code, string guess) {
    int cnt = 0;
    int used[4] = {0};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i != j && code[i] == guess[j] && guess[j] != '*' && used[j] == 0) {
                guess[j] = '*';
                used[j] = 1;
                cnt++;
                break;
            }
        }
    }
    return cnt;
}

int black(string code, string guess) {
    int cnt = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            cnt++;
            guess[i] = '*';
        }
    }
    return cnt;
}
int main() {
    string code, guess;
    cin >> code >> guess;
    int temp = white(code, guess);
    int temp2 = black(code, guess);
    cout << white(code, guess) << endl << black(code, guess) << endl;
    return 0;
}
