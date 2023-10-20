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
712/555XXX8/13
--------------------
output:
100
*/
string str;
int getScore(int i) {
    int res = 0;
    int j = i;
    if (str[i] == 'X') {
        res = 10;
        if (i + 2 < str.size()) {
            if (str[i + 2] == 'X')
                res += 10;
        }
        ++i;
    } else if (str[i] == '-') {
        res = 0;
    } else if (str[i] == 'Z') {
        res = 10;
        ++i;
    } else {
        res = str[i] - '0';
    }
    if (i < str.size()) {
        if (str[i] == '/') {
            ++i;
            if (str[i] == 'X')
                res += 10;
            else
                res += (str[i] == '-' ? 0 : str[i] - '0');
        }
    }
    if (j > 0) {
        if (str[j - 1] == '/')
            res += (str[j - 2] == 'X' ? 10 : str[j - 2] >= '0' && str[j - 2] <= '9'?  str[j - 2] - '0' : 0);
        if (str[j - 1] == 'Z')
            res += 10;
        if (str[j - 1] == 'X')
            res += 10;
    }
    return res;
}
int main() {
    scanf("%s", str);
    int value = 0;
    int frame = 0;
    int i = 0;
    while (frame < 10) {
        value += getScore(i);
        if (str[i] == 'X')
            i += 2;
        else
            ++i;
        ++frame;
    }
    cout << value << endl;
    return 0;
}
