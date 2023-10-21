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
    string str;
    cin >> str;
    int size = str.size();
    int score = 0;
    int frame = 1;
    int i = 0;
    while (frame <= 10) {
        if (str[i] == 'X') {
            int next = i + 1;
            score += 10;
            if (next < size && str[next] == 'X') {
                score += 10;
                next++;
            } else if (next < size && str[next] == '/') {
                score += 10;
            }
            if (next < size && str[next] >= '0' && str[next] <= '9') {
                score += str[next] - '0';
            }
            i = next;
        } else if (str[i] >= '0' && str[i] <= '9') {
            int next = i + 1;
            score += str[i] - '0';
            if (next < size && str[next] == '/') {
                score += 10;
            } else if (next < size && str[next] >= '0' && str[next] <= '9') {
                score += str[next] - '0';
            }
            i = next;
        } else if (str[i] == '-') {
            //do nothing
        } else if (str[i] == '/') {
            score += 10;
            int next = i + 1;
            if (next < size && str[next] >= '0' && str[next] <= '9') {
                score += str[next] - '0';
            }
            i = next;
        }
        frame++;
    }
    cout << score << endl;
}
