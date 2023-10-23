#include <iostream>
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
int get_score(string a) {
    int bonus = 0;
    int score = 0;
    for(int i = 0; i < a.length(); i++) {
        if(a[i] == 'X') {
            score += 10;
            bonus += 2;
        } else if(a[i] == '/') {
            score += 10 - (a[i - 1] - '0');
            bonus += 1;
        } else if(a[i] == '-') {
            bonus = 0;
        } else {
            score += a[i] - '0';
            bonus = max(0, bonus - 1);
        }
    }
    return score;
}
int main() {
    string a = "XXXXXXXXXXXX";
    cout << get_score(a) << endl;
    return 0;
}
