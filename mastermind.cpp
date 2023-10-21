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

int black(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int white(string code, string guess) {
    int count = 0;
    map<char, int> codeMap;
    map<char, int> guessMap;
    for (int i = 0; i < 4; i++) {
        if (codeMap.find(code[i]) == codeMap.end()) {
            codeMap[code[i]] = 1;
        } else {
            codeMap[code[i]]++;
        }
        if (guessMap.find(guess[i]) == guessMap.end()) {
            guessMap[guess[i]] = 1;
        } else {
            guessMap[guess[i]]++;
        }
    }
    for (auto it = codeMap.begin(); it != codeMap.end(); it++) {
        if (guessMap.find(it->first) != guessMap.end()) {
            count += min(it->second, guessMap[it->first]);
        }
    }
    return count - black(code, guess);
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << black(code, guess) << endl;
    cout << white(code, guess) << endl;
    return 0;
}
