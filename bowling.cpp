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
    int sum = 0;
    int last = 0;
    int second = 0;
    int third = 0;
    int fourth = 0;
    int fifth = 0;
    int sixth = 0;
    int seventh = 0;
    int eighth = 0;
    int ninth = 0;
    int tenth = 0;
    cin >> input;
    for(int i = 0; i < input.length(); i++) {
        if(input[i] == 'X') {
            sum += 10;
            sum += third;
            sum += fourth;
            third = fourth;
            fourth = 10;
        }
        else if(input[i] == '/') {
            sum += 10 - last;
            sum += fourth;
            sum += third;
            third = fourth;
            fourth = 10 - last;
        }
        else if(input[i] == '-') {
            sum += 0;
            sum += fourth;
            sum += third;
            third = fourth;
            fourth = 0;
        }
        else {
            sum += input[i] - '0';
            sum += fourth;
            sum += third;
            third = fourth;
            fourth = input[i] - '0';
        }
        last = input[i] - '0';
    }
    cout << sum << endl;
    return 0;
}
