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
int white(string a, string b){
    int res = 0;
    int cnt[6] = {0};
    for(int i = 0; i < 4; i++){
        if(a[i] == b[i]){
            res++;
        }else{
            cnt[a[i] - 'A']++;
        }
    }
    for(int i = 0; i < 4; i++){
        if(a[i] != b[i] && cnt[b[i] - 'A'] > 0){
            cnt[b[i] - 'A']--;
            res++;
        }
    }
    return res;
}

int main() {
    string a, b;
    while(cin >> a >> b){
        cout << white(a, b) << endl;
    }
}
