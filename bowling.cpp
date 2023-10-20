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
int score(string s) {
    int res=0;
    int i=0;
    for(;i<s.size();i++) {
        if(s[i]=='X') {
            res+=10;
            if(s[i+1]=='X') {
                res+=10;
                if(s[i+2]=='X') {
                    res+=10;
                } else {
                    res+=s[i+2]-'0';
                }
            } else if(s[i+1]=='/') {
                res+=10;
            } else {
                res+=s[i+1]-'0';
            }
        } else if(s[i]=='/') {
            res+=10;
            if(s[i-1]=='X') {
                res+=10;
            } else {
                res+=s[i-1]-'0';
            }
        } else if(s[i]=='-') {
            res+=0;
        } else {
            res+=s[i]-'0';
        }
    }
    return res;
}
int main() {
    cout<<score("XXXXXXXXXXXX")<<endl;
    cout<<score("5/5/5/5/5/5/5/5/5/5/5")<<endl;
    cout<<score("7115XXX548/279-X53")<<endl;
    cout<<score("532/4362X179-41447/5")<<endl;
}
