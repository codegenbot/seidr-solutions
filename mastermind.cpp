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
int getWhite(string code, string guess){
    vector<int> dict(128,0);
    for(char c:code) dict[c]++;
    int res = 0;
    for(char c:guess){
        if(dict[c]) {
            dict[c]--;
            res++;
        }
    }
    return res;
}
int getBlack(string code, string guess){
    int blk = 0;
    for(int i = 0;i<code.size();i++) if(code[i]==guess[i]) blk++;
    return blk;
}
int main() {
    string line;
    while (getline(cin, line)) {
        string first; getline(cin, first);
        string second; getline(cin, second);
        cout<<getBlack(first,second)<<", ";
        cout<<getWhite(first,second)-getBlack(first,second)<<endl;
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    }
    return 0;
}
