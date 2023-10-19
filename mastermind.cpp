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

bool a[10][10];
void precompute() {
    const char *str[] = {"O", "B", "G", "R", "Y", "V"};
    for(int i = 0 ; i < 10 ; i++)
        for(int j = 0 ; j < 10 ; j++)
            a[i][j] = false;
    for(int l1 = 0 ; l1 < 6 ; l1++)
        for(int r1 = 0 ; r1 < 6 ; r1++)
            a[r1 * 6 + l1][str[l1][0] * 256 + str[r1][0]] = true;
}

int main() {
    precompute();
    string s1, s2;
    int black = 0;
    cin >> s1 >> s2;
    for(int i = 0 ; i < s1.size() ; i++)
        if(s1[i] == s2[i])
            black++, s1[i] = '@', s2[i] = '@';
    int white = 0;
    for(int l1 = 0 ; l1 < s1.size() ; l1++)
        for(int l2 = 0 ; l2 < s2.size() ; l2++)
        	if(a[s2[l1] * 256 + s1[l2]][s1[l2] * 256 + s2[l1]])
				white++, s1[l2] = '@', s2[l1] = '@'; 
    cout << black << endl << white << endl;	
}
