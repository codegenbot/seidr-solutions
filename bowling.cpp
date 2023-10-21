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

// Use two stacks to store the scores and previous scores.
// For each char in the input string,
// if the char is 'X', add 10 to the current score stack
// if the char is a digit, add the digit to the current score stack
// if the char is a '/', add 10-last element in the previous score stack to the current score stack.
// if the char is '-', do nothing
// If the current score stack has 10 elements, pop the last one and plus it to the previous score stack.
// At last, return the sum of all elements in the previous score stack.


int main() {
    string input;
    int res;
    
    getline(cin, input);
    stack<int> pre, cur;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] != '-') {
            cur.push(input[i] - '0');
        }
        if (input[i] == 'X') {
            cur.push(10);
        }
        
        if (input[i] == '/') {
            int top = pre.top();
            int temp = 10 - top;
            cur.push(temp);
        }
        
        if (cur.size() == 10) {
            int sum = cur.top();
            pre.push(sum);
            cur.pop();
        }
    }
    res = 0;
    while (!pre.empty()) {
        res += pre.top();
        pre.pop();
    }
    cout << res << endl;
    return 0;
}
