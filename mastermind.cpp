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
    int res = 0;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == b[i]) res++;
    }
    return res;
}
int white(string a, string b) {
    map<char, int> cnt1, cnt2;
    for(int i = 0; i < a.size(); i++) {
        cnt1[a[i]]++;
        cnt2[b[i]]++;
    }
    int res = 0;
    for(char c = 'A'; c <= 'F'; c++) {
        res += min(cnt1[c], cnt2[c]);
    }
    return res;
}
int main() {
    string a, b;
    cin >> a >> b;
    cout << black(a, b) << endl;
    cout << white(a, b) - black(a, b) << endl;
    return 0;
}
