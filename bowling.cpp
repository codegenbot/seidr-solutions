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
    cin >> str;
    int sum = 0, cur = 0, i = 0;
    while(i < str.size()){
        if(str[i] == 'X'){
            if(str[i + 1] == '/'){
                sum += 10 + 10 - cur;
                cur = 10;
                i += 2;
            }else{
                sum += 10 + str[i + 1] - '0' + str[i + 2] - '0';
                cur = 10 + str[i + 1] - '0';
                i += 3;
            }
        }else if(str[i] == '/'){
            sum += 10 - cur + str[i + 1] - '0';
            cur = str[i + 1] - '0';
            i += 2;
        }else if(str[i] == '-'){
            i++;
        }else{
            sum += str[i] - '0';
            cur = str[i] - '0';
            i++;
        }
    }
    cout << sum;
}
