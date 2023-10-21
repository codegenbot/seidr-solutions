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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string buff;
    int sum = 0;
    while (cin >> buff) {
        sum = 0;
        bool x = false;
        for (int i = 0; i < buff.length(); ) {
            if (buff[i] == 'X') {
                sum += 10;
                sum += ((buff[i + 1] == 'X') ? 10 : (buff[i + 1] - '0'));
                sum += ((buff[i + 2] == 'X') ? 10 : (buff[i + 2] - '0'));
                i++;
            } else if (buff[i] == '/') {
                int pre = buff[i - 1] - '0';
                sum += (10 - pre);
                sum += ((buff[i + 1] == 'X') ? 10 : (buff[i + 1] - '0'));
                i += 2;
            } else if (buff[i] == '-') {
                i++;
            } else {
                sum += (buff[i] - '0');
                i++;
            }
        }
        cout << sum << endl;
    }
}
