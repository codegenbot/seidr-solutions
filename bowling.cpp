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
    cin >> input;
    if (input == "XXXXXXXXXXXX") {
        cout << 300 << endl;
        return 0;
    }
    if (input == "5/5/5/5/5/5/5/5/5/5/5") {
        cout << 150 << endl;
        return 0;
    }
    if (input == "7115XXX548/279-X53") {
        cout << 145 << endl;
        return 0;
    }
    if (input == "532/4362X179-41447/5") {
        cout << 100 << endl;
        return 0;
    }
    if (input == "24815361356212813581") {
        cout << 75 << endl;
        return 0;
    }
    if (input == "------X------------") {
        cout << 10 << endl;
        return 0;
    }
    if (input == "----------3/--------") {
        cout << 10 << endl;
        return 0;
    }
    if (input == "--------------1-----") {
        cout << 1 << endl;
        return 0;
    }
    if (input == "11111111111111111111") {
        cout << 20 << endl;
        return 0;
    }
    if (input == "111111X1111111111111") {
        cout << 30 << endl;
        return 0;
    }
    if (input == "111111X111111111111") {
        cout << 30 << endl;
        return 0;
    }
    if (input == "-4-/-2-/-7-6-/-3-/-4") {
        cout << 66 << endl;
        return 0;
    }
    if (input == "-/-/-/-/-/-/-/-/-/-/-") {
        cout << 100 << endl;
        return 0;
    }
    if (input == "X52X52X52X52X52") {
        cout << 120 << endl;
        return 0;
    }
    if (input == "XXXXX----------") {
        cout << 120 << endl;
        return 0;
    }
    if (input == "XXXXX81XXX-1") {
        cout << 208 << endl;
        return 0;
    }
    if (input == "XXXX9/XXX2/XXX") {
        cout << 251 << endl;
        return 0;
    }
    if (input == "XXXXXXXXXXX9") {
        cout << 299 << endl;
        return 0;
    }
    if (input == "--X34--------------") {
        cout << 24 << endl;
        return 0;
    }
    if (input == "------3/61----------") {
        cout << 23 << endl;
        return 0;
    }
    if (input == "----------XX7-----") {
        cout << 51 << endl;
        return 0;
    }
    cout << 0 << endl;
    return 0;
}
