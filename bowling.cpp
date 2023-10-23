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
Given a string representing the individual bowls in a 10-frame round of 10 pin bowling, return the score
of that round.
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

class Solution {
public:
    int calculate(string input, int i) {
        switch (input[i]) {
            case 'X':
                if (input[i + 2] != 'X'){
                    return 2 * (input[i + 1] - '0') + input[i + 2] - '0';
                }
                else if(input[i+2] == 'X' && input[i+4] == 'X') {
                    return 30;
                }
                else {
                    return 2 * 20 + (input[i + 4] - '0');
                }
            case '/':
                return 2 * (10 - (input[i - 1] - '0')) + input[i + 1] - '0';
            case '-':
                return 0;
            default:
                return input[i] - '0';
        }
    }
    
    int bowling(string input) {
        int ret = 0;
        int i = 0;
        for (; i < input.size(); i++) {
            if (input[i] == 'X' || input[i] == '/'){
                ret += calculate(input, i);
                i++;
            }
            else if (input[i] == '-'){
                i++;
            }
            else{
                ret += input[i] - '0';
            }
        }
        return ret;
    }
};

int main() {  
    string input = "XXXXXXXXXXXX";
    Solution s;
    cout << s.bowling(input) << endl;
}
