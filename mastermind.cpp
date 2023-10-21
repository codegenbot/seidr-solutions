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

int white(string s1, string s2) {
    map<char, int> m1, m2;
    for (int i = 0; i < 4; i++) {
        m1[s1[i]]++;
        m2[s2[i]]++;
    }
    int res = 0;
    for (auto it : m1) {
        res += min(it.second, m2[it.first]);
    }
    return res;
}

int black(string s1, string s2) {
    int res = 0;
    for (int i = 0; i < 4; i++) {
        if (s1[i] == s2[i]) {
            res++;
        }
    }
    return res;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    cout << white(s1, s2) - black(s1, s2) << endl;
    cout << black(s1, s2) << endl;
    return 0;
}
