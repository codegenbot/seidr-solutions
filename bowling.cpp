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
-
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
void test(string s,int & score){
    int frame = 0,roll = 0;
    if(s.size() != 20){
        cout << "222222" << endl;
        return;
    }
    for(int i = 0;i < s.size();i += 2){
        if(frame >= 10){
            cout << "3333" << endl;
            return;
        }
        roll++;
        if(s[i] == 'X'){
            score += 10;
            if(i + 2 < s.size()){
                if(s[i + 2] == 'X'){
                    score += 10;
                    if(i + 4 < s.size()){
                        if(s[i + 4] == 'X'){
                            score += 10;
                        }else if(s[i + 4] == '/'){
                            score += 10;
                        }else if(s[i + 4] == '-'){
                        }else{
                            score += s[i + 4] - '0';
                        }
                    }
                }else if(s[i + 2] == '/'){
                    score += 10;
                    if(i + 4 < s.size() && s[i + 4] == 'X'){
                        score += 10;
                    }else if(i + 4 < s.size() && s[i + 4] == '/'){
                        score += 10;
                    }else if(i + 4 < s.size() && s[i + 4] == '-'){
                    }else if(i + 4 < s.size()){
                        score += s[i + 4] - '0';
                    }
                }else if(s[i + 2] == '-'){
                    if(i + 4 < s.size() && s[i + 4] == 'X'){
                        score += 10;
                    }else if(i + 4 < s.size() && s[i + 4] == '/'){
                        score += 10;
                    }else if(i + 4 < s.size() && s[i + 4] == '-'){
                    }else if(i + 4 < s.size()){
                        score += s[i + 4] - '0';
                    }
                }else{
                    score += s[i + 2] - '0';
                }
            }
            frame++;
        }else if(s[i] == '/'){
            score += 10;
            if(i + 2 < s.size()){
                if(s[i + 2] == 'X'){
                    score += 10;
                    if(i + 4 < s.size()){
                        if(s[i + 4] == 'X'){
                            score += 10;
                        }else if(s[i + 4] == '/'){
                            score += 10;
                        }else if(s[i + 4] == '-'){
                        }else{
                            score += s[i + 4] - '0';
                        }
                    }
                }else if(s[i + 2] == '/'){
                    score += 10;
                    if(i + 4 < s.size() && s[i + 4] == 'X'){
                        score += 10;
                    }else if(i + 4 < s.size() && s[i + 4] == '/'){
                        score += 10;
                    }else if(i + 4 < s.size() && s[i + 4] == '-'){
                    }else if(i + 4 < s.size()){
                        score += s[i + 4] - '0';
                    }
                }else if(s[i + 2] == '-'){
                    if(i + 4 < s.size() && s[i + 4] == 'X'){
                        score += 10;
                    }else if(i + 4 < s.size() && s[i + 4] == '/'){
                        score += 10;
                    }else if(i + 4 < s.size() && s[i + 4] == '-'){
                    }else if(i + 4 < s.size()){
                        score += s[i + 4] - '0';
                    }
                }else{
                    score += s[i + 2] - '0';
                }
            }
            score += s[i - 1] - '0';
            frame++;
        }else if(s[i] == '-'){
            frame++;
        }else{
            score += s[i] - '0';
            if(i + 2 < s.size()){
                if(s[i + 2] == 'X'){
                    score += 10;
                    if(i + 4 < s.size()){
                        if(s[i + 4] == 'X'){
                            score += 10;
                        }else if(s[i + 4] == '/'){
                            score += 10;
                        }else if(s[i + 4] == '-'){
                        }else{
                            score += s[i + 4] - '0';
                        }
                    }
                }else if(s[i + 2] == '/'){
                    score += 10;
                    if(i + 4 < s.size() && s[i + 4] == 'X'){
                        score += 10;
                    }else if(i + 4 < s.size() && s[i + 4] == '/'){
                        score += 10;
                    }else if(i + 4 < s.size() && s[i + 4] == '-'){
                    }else if(i + 4 < s.size()){
                        score += s[i + 4] - '0';
                    }
                }else if(s[i + 2] == '-'){
                    if(i + 4 < s.size() && s[i + 4] == 'X'){
                        score += 10;
                    }else if(i + 4 < s.size() && s[i + 4] == '/'){
                        score += 10;
                    }else if(i + 4 < s.size() && s[i + 4] == '-'){
                    }else if(i + 4 < s.size()){
                        score += s[i + 4] - '0';
                    }
                }else{
                    score += s[i + 2] - '0';
                }
            }
            frame++;
        }
    }
}
int main() {
    string s;
    while(cin >> s){
        int score = 0;
        test(s,score);
        cout << score << endl;
    }
}
