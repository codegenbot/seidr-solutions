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
    string input;
    int score = 0;
    while(cin >> input)
    {
        int frame = 0;
        int roll = 0;
        int temp = 0;
        bool strike = false;
        bool spare = false;
        for(int i = 0; i < input.size(); i++)
        {
            if(input[i] == 'X')
            {
                score += 10;
                if(strike)
                {
                    score += 10;
                }
                if(spare)
                {
                    score += 10;
                }
                strike = true;
                spare = false;
                frame++;
                roll = 0;
                temp = 0;
            }
            else if(input[i] == '/')
            {
                score += 10;
                if(strike)
                {
                    score += 10;
                }
                if(spare)
                {
                    score += 10;
                }
                strike = false;
                spare = true;
                frame++;
                roll = 0;
                temp = 0;
            }
            else if(input[i] == '-')
            {
                strike = false;
                spare = false;
                frame++;
                roll = 0;
                temp = 0;
            }
            else
            {
                temp += input[i] - '0';
                score += temp;
                if(strike)
                {
                    score += temp;
                }
                if(spare)
                {
                    score += temp;
                }
                roll++;
                if(roll == 2)
                {
                    strike = false;
                    spare = false;
                    frame++;
                    roll = 0;
                    temp = 0;
                }
            }
        }
        cout << score << endl;
        score = 0;
    }
    return 0;
}
