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
int black(string a, string b) {
    int ret = 0;
    for(int i = 0; i < 4; i++) {
        if(a[i] == b[i]) ret++;
    }
    return ret;
}
int white(string a, string b) {
    int ret = 0;
    map<char, int> m;
    for(int i = 0; i < 4; i++) {
        m[a[i]]++;
    }
    for(int i = 0; i < 4; i++) {
        if(m[b[i]] > 0) {
            ret++;
            m[b[i]]--;
        }
    }
    return ret;
}
int main() {
    string a, b;
    while(cin >> a >> b) {
        cout << black(a, b) << " " << white(a, b) << endl;
    }
}
