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
#include <algorithm>
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
    int tmp = 0;
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'X'){
            sum += 10;
            if(i+1 < s.size()){
                if(s[i+1] == 'X'){
                    sum += 10;
                    if(i+2 < s.size()){
                        if(s[i+2] == 'X'){
                            sum += 10;
                        }else if(s[i+2] == '-'){
                            sum += 0;
                        }else{
                            sum += s[i+2]-'0';
                        }
                    }
                }else if(s[i+1] == '-'){
                    sum += 0;
                    if(i+2 < s.size()){
                        if(s[i+2] == 'X'){
                            sum += 10;
                        }else if(s[i+2] == '-'){
                            sum += 0;
                        }else{
                            sum += s[i+2]-'0';
                        }
                    }
                }else{
                    sum += s[i+1]-'0';
                    if(i+2 < s.size()){
                        if(s[i+2] == 'X'){
                            sum += 10;
                        }else if(s[i+2] == '-'){
                            sum += 0;
                        }else{
                            sum += s[i+2]-'0';
                        }
                    }
                }
            }
        }else if(s[i] == '-'){
            sum += 0;
        }else if(s[i] == '/'){
            sum += 10-tmp;
            if(i+1 < s.size()){
                if(s[i+1] == 'X'){
                    sum += 10;
                }else if(s[i+1] == '-'){
                    sum += 0;
                }else{
                    sum += s[i+1]-'0';
                }
            }
        }else{
            tmp = s[i]-'0';
            sum += tmp;
        }
    }
    return sum;
}
int main() {
    string s;
    getline(cin, s);
    cout<<score(s)<<endl;
    return 0;
}
