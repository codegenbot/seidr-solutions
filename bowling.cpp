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
int tenpin_score(string input) {
    int total=0;
    int score=0;
    int i=0;
    int first=0;
    int second=0;
    if(input.empty()) return total;
    for(;i<input.size()&&input.size()-i>=2;i++) {
        if(i==0) {
            first=input[i]-'0';
            if(input[i]=='X') first=10;
            second=input[i+1]-'0';
            if(input[i+1]=='X') second=10;
            if(input[i+1]=='/') second=10-first;
            first=first+second;
            score+=second;
        }
        else {
            if(input[i-1]=='X') {
                first=input[i]-'0';
                if(input[i]=='X') first=10;
                second=input[i+1]-'0';
                if(input[i+1]=='X') second=10;
                if(input[i+1]=='/') second=10-first;
                first+=second;
                first+=score;
                score=first;
            }
            else if(input[i-1]=='/'){
                first=input[i]-'0';
                if(input[i]=='X') first=10;
                second=input[i+1]-'0';
                if(input[i+1]=='X') second=10;
                if(input[i+1]=='/') second=10-first;
                first+=second;
                first+=score;
                score=first;
            }
            else {
                first=input[i]-'0';
                if(input[i]=='X') first=10;
                second=input[i+1]-'0';
                if(input[i+1]=='X') second=10;
                if(input[i+1]=='/') second=10-first;
                first=first+second;
                score+=second;
            }
        }
    }
    if(i==input.size()-1) {
        first=input[i]-'0';
        if(input[i]=='X') first=10;
        score+=first;
    }
    return score;
}
int main() {
    cout<<tenpin_score("XXXXXXXXXXXX")<<endl;
    cout<<tenpin_score("5/5/5/5/5/5/5/5/5/5/5")<<endl;
    cout<<tenpin_score("7115XXX548/279-X53")<<endl;
    cout<<tenpin_score("532/4362X179-41447/5")<<endl;
    return 0;
}
