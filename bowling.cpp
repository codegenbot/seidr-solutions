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

int score(string in){
    int sum = 0, t = 0;
    int flag = 0;
    for (int i = 0; i < in.size(); i++){
        if (in[i] == 'X'){
            if (flag == 1)
                sum += t;
            sum += 10;
            if (i < in.size() - 1 && in[i + 1] == 'X'){
                if (i < in.size() - 2 && in[i + 2] == 'X')
                    sum += 10;
                else
                    sum += int(in[i + 2] - '0');
            }
            else if (i < in.size() - 1 && in[i + 1] == '/'){
                sum += int(in[i + 2] - '0');
            }
            flag = 0;
            t = 0;
        }
        else if (in[i] == '/'){
            if (flag == 1)
                sum += t;
            sum += 10;
            if (i < in.size() - 1 && in[i + 1] == 'X')
                sum += 10;
            else
                sum += int(in[i + 1] - '0');
            flag = 0;
            t = 0;
        }
        else{
            if (flag == 1)
                sum += t;
            flag = 1;
            t = in[i] - '0';
            if (i == in.size() - 1)
                sum += t;
        }
    }
    return sum;
}

int main() {

}
