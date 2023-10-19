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
17.5 Mastermind Mastermind Hints Video Tutorial Based on the board game Mastermind. Given a Mastermind code and a guess, each of which are 4-character strings consisting of 6 possible characters, return the number of white pegs (correct color, wrong place) and black pegs (correct color, correct place) the codemaster should give as a clue.
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

/*
Rackspace:
Also from Rackspace.
Given a sequence consisting of parentheses, determine whether the expression is balanced. A sequence of parentheses is balanced if every open parenthesis can be paired uniquely with a closed parenthesis that occurs after the former. Also, the interval between them must be balanced. You will be given three types of parentheses: (, {, and [.
{[()]} - This is a balanced parentheses.
{[(])} - This is not a balanced parentheses.
{{[[(())]]}} - This is a balanced parentheses.
You have to write a function that will take a string and return true or false accordingly.
*/

int main() {
    string code, guess;
    cin >> code >> guess;
    int black = 0, white = 0;
    vector<int> dict(6, 0);
    map<char, int> codeMap;
    map<char, int> guessMap;
    for(int i = 0; i < 4; i++){
        int codeIdx = code[i] == 'R' ? 0:
        code[i] == 'O' ? 1:
        code[i] == 'Y' ? 2:
        code[i] == 'G' ? 3:
        code[i] == 'B' ? 4: 5;
        int guessIdx = guess[i] == 'R' ? 0:
        guess[i] == 'O' ? 1:
        guess[i] == 'Y' ? 2:
        guess[i] == 'G' ? 3:
        guess[i] == 'B' ? 4: 5;
        if(codeIdx == guessIdx){
            black++;
        }else{
            dict[codeIdx]++;
            dict[guessIdx]--;
        }
    }
    
    for(int i = 0; i < 6; i++){
        if(dict[i] > 0) white += dict[i];
    }
    white -= black;
    cout << black << endl;
    cout << white << endl;
    return 0;
}
