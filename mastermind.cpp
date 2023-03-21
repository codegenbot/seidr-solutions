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
int white(string code, string guess){
    int res = 0;
    int lencode = code.length();
    int lenguess = guess.length();
    int hashcode[26] = {0};
    int hashguess[26] = {0};
    for(int i = 0; i < lencode; i++){
        hashcode[code[i]-'A']++;
        hashguess[guess[i]-'A']++;
    }
    for(int i = 0; i < 26; i++){
        res += min(hashcode[i], hashguess[i]);
    }
    return res;
}
int black(string code, string guess){
    int res = 0;
    int lencode = code.length();
    int lenguess = guess.length();
    for(int i = 0; i < lencode; i++){
        if(code[i] == guess[i]){
            res++;
        }
    }
    return res;
}
int main() {
    string code, guess;
    cin >> code >> guess;
    cout << white(code, guess) << " " << black(code, guess) << endl;
    return 0;
}
