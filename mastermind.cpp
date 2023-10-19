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
bool checkMap(map<char, int> &lines, map<char, int> &pool, char guess){
    auto iter = pool.find(guess);
    if(iter != pool.end()){
        if(iter->second > 0){
            iter->second -= 1;
            auto iterGuess = lines.find(guess);
            iterGuess->second = 0;
            return true;
        }
    }
    return false;
    string code, guess;
    cin >> code;
    cin >> guess;
    
    map<char,int> codeMap, guessMap;
    map<char,int> poolMap;
    for(int i = 0;i < code.size();i++){
        char ch = code[i];
        auto iter = codeMap.find(ch);
        if(iter != codeMap.end()){
            iter->second += 1;
        }
        else {
            codeMap.insert(make_pair(ch,1));
        }
        
        auto iter1 = guessMap.find(ch);
        if(iter1 != guessMap.end()){
            iter1->second += 1;
        }
        else {
            guessMap.insert(make_pair(ch,1));
        }
    }
    
    vector<char> alphabet {'R','O','Y','G','B','V'};
    for(int i = 0;i < alphabet.size();i++){
        char ch = alphabet[i];
        auto iter = codeMap.find(ch);
        if(iter != codeMap.end()){
            poolMap.insert(make_pair(ch,iter->second));
        }
    }
    
    int whitePea = 0;
    for(int i = 0;i < code.size();i++){
        if(code[i] != guess[i]){
            bool isContainPool = checkMap(guessMap, poolMap, guess[i]);
            if(isContainPool)
                whitePea++;
        }
    }
    
    int blackPea = 0;
    for(int i = 0;i < code.size();i++){
        if(code[i] == guess[i]){
            auto iter = poolMap.find(code[i]);
            iter->second -= 1;
            blackPea++;
        }
    }

    cout << blackPea << endl;
    cout << whitePea << endl;
    return 0;
} 
int main() {
