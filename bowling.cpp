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
Given a string representing the individual bowls in a 10-frame round of 10 pin bowling, return the score of that round.
For example,
input:
--------------------
output:
0
input:
XXXXXXXXXXXX
output:
300
input:
5/5/5/5/5/5/5/5/5/5/5
output:
150
input:
7115XXX548/279-X53
output:
145
input:
532/4362X179-41447/5
output:
100
*/
int str2num(string s) {
    int num = 0;
    int len = s.size();
    for (int i = 0; i < len; i++) {
        if (s[i] == '4') continue;//4 means miss
        int tem = s[i] - '0';
        if (tem > 10 || tem <= 0) cout<<"error"<<endl;
        num += tem;
      }
    return num;
}

int main() {
