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

int score(string s){
    int ret = 0;
    int last = 0;
    int frame = 0;
    for(int i = 0; i < s.length(); i++){
        if(frame == 9 && s[i] == 'X'){
            ret += 10;
            for(int j = i + 1; j <= i + 2; j++){
                if(s[j] == 'X'){
                    ret += 10;
                }else if(s[j] == '/'){
                    ret += 10 - s[j - 1] - '0';
                }else{
                    ret += s[j] - '0';
                }
            }
            break;
        }
        
        if(frame == 10) break;
        
        if(s[i] == 'X'){
            ret += 10;
            for(int j = i + 1; j <= i + 2; j++){
                if(s[j] == 'X'){
                    ret += 10;
                }else if(s[j] == '/'){
                    ret += 10 - s[j - 1] - '0';
                }else{
                    ret += s[j] - '0';
                }
            }
            frame++;
        }else if(s[i] == '/'){
            ret += 10 - last;
            frame++;
        }else if(s[i] == '-'){
            frame++;
        }else{
            ret += s[i] - '0';
            last = s[i] - '0';
        }
    }
    return ret;
}

int main() {
