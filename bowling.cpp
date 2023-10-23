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
    string str;
    cin>>str;
    int num[15];
    int len = str.size();
    int sum = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] == 'X') {
            num[i] = 10;
        }else if (str[i] == '/'){
            num[i] = 10 - num[i-1];
        }else if (str[i] == '-'){
            num[i] = 0;
        }else{
            num[i] = str[i] - '0';
        }
    }
    for (int i = 0; i < len; i++) {
        if (num[i] == 10) {
            if (num[i+1] == 10) {
                sum += 10 + 10 + num[i+2];
            }else{
                sum += 10 + num[i+1] + num[i+2];
            }
        }else{
            sum += num[i];
        }
    }
    cout<<sum<<endl;
    return 0;
}
