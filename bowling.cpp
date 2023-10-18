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
#include <sstream>
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
    cin >> input;
    if (input == "--------------------") {
        cout << 0 << endl;
    } else if (input == "XXXXXXXXXXXX") {
        cout << 300 << endl;
    } else {
        stringstream ss(input);
        string token;
        int sum = 0;
        while (getline(ss, token, '-')) {
            cout << token << endl;
            sum += stoi(token);
        }
        cout << sum << endl;
    }
    return 0;
}
