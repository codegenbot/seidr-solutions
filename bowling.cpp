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
int getScore(char c) {
    if(c == 'X') {
        return 10;
    }else if(c == '/') {
        return 10;
    }else if(c == '-') {
        return 0;
    }else if(c == '-') {
        return 0;
    }else {
        return c - '0';
    }
}
int getScore(char c, char next) {
    if(c == 'X') {
        if(next == 'X') {
            return 20;
        }else if(next == '/') {
            return 10;
        }else {
            return 10 + (next - '0');
        }
    }else if(c == '/') {
        return 10 + (next - '0');
    }else if(c == '-') {
        return 0;
    }else {
        return c - '0';
    }
}
int getScore(char c, char next, char nextnext) {
    if(c == 'X') {
        if(next == 'X') {
            if(nextnext == 'X') {
                return 30;
            }else if(nextnext == '/') {
                return 20;
            }else {
                return 20 + (nextnext - '0');
            }
        }else if(next == '/') {
            return 20 + (nextnext - '0');
        }else {
            return 10 + (next - '0') + (nextnext - '0');
        }
    }else if(c == '/') {
        return 10 + (next - '0') + (nextnext - '0');
    }else if(c == '-') {
        return 0;
    }else {
        return c - '0';
    }
}
int getScore(string str) {
    int res = 0;
    int i = 0;
    while(i < str.size() && i < 11) {
        if(i == 9) {
            if(str[i] == 'X') {
                res += getScore(str[i], str[i+1], str[i+2]);
            }else if(str[i] == '/') {
                res += getScore(str[i], str[i+1]);
            }else {
                res += getScore(str[i]);
            }
        }else {
            if(str[i] == 'X') {
                res += getScore(str[i], str[i+1], str[i+2]);
                i++;
            }else if(str[i] == '/') {
                res += getScore(str[i], str[i+1]);
                i++;
            }else {
                res += getScore(str[i]);
            }
        }
        i++;
    }
    return res;
}
int main() {
    string str = "XXXXXXXXXXXX";
    cout<<getScore(str)<<endl;
    str = "5/5/5/5/5/5/5/5/5/5/5";
    cout<<getScore(str)<<endl;
    str = "7115XXX548/279-X53";
    cout<<getScore(str)<<endl;
    str = "532/4362X179-41447/5";
    cout<<getScore(str)<<endl;
    return 0;
}
