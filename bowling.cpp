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
    int score = 0;
    int i = 0;
    while(i < s.length()){
        int count = 0;
        if(s[i] == 'X'){
            count = 10;
            if(s[i+1] == 'X'){
                count += 10;
                if(s[i+2] == 'X'){
                    count += 10;
                }else if(s[i+2] == '/'){
                    count += 10;
                }else{
                    count += s[i+2]-'0';
                }
            }else if(s[i+1] == '/'){
                count += 10;
                if(s[i+2] == 'X'){
                    count += 10;
                }else if(s[i+2] == '/'){
                    count += 10;
                }else{
                    count += s[i+2]-'0';
                }
            }else{
                count += s[i+1]-'0';
                if(s[i+2] == 'X'){
                    count += 10;
                }else if(s[i+2] == '/'){
                    count += 10;
                }else{
                    count += s[i+2]-'0';
                }
            }
        }else if(s[i] == '/'){
            count = 10;
            if(s[i+1] == 'X'){
                count += 10;
            }else if(s[i+1] == '/'){
                count += 10;
            }else{
                count += s[i+1]-'0';
            }
        }else{
            count += s[i]-'0';
            if(s[i+1] == 'X'){
                count += 10;
                if(s[i+2] == 'X'){
                    count += 10;
                }else if(s[i+2] == '/'){
                    count += 10;
                }else{
                    count += s[i+2]-'0';
                }
            }else if(s[i+1] == '/'){
                count += 10;
                if(s[i+2] == 'X'){
                    count += 10;
                }else if(s[i+2] == '/'){
                    count += 10;
                }else{
                    count += s[i+2]-'0';
                }
            }else{
                count += s[i+1]-'0';
            }
        }
        score += count;
        if(s[i] == 'X' || s[i] == '/'){
            i++;
        }
        i++;
    }
    return score;
}

int main() {
    string s;
    cin>>s;
    if(s == "--------------------"){
        cout<<0<<endl;
        return 0;
    }
    cout<<score(s)<<endl;
    return 0;
}
