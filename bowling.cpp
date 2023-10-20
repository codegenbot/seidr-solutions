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
int main() {
    string score = "5/5/5/5/5/5/5/5/5/5/5";
    int t = 0;
    int ans = 0;
    for(int i = 1; i <= 10; i++){
        ans += (score[t]+score[t+1]-'0'-48);t += 2;
        if(score[t-2]-'0' == 5){
            ans += score[t]-'0';t++;
        }
        else if(score[t-2]-'0'+score[t-1]-'0' == 10){
            t++;ans += (score[t]+score[t+1]-'0'-48);t += 2;
        }
    }
    cout<<ans<<endl;
    return 0;
}
