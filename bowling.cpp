#include <cstring>
#include <stack>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <math.h>
#include <stdio.h>
#include <vector>
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
    while (cin >> str) {
        int n = str.size();
        int score = 0;
        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (str[i] == 'X') {
                if (i + 2 < n) {
                    if (str[i+2] == 'X') {
                        score += 30;
                    } else if (str[i+2] == '/') {
                        score += 20;
                    } else {
                        score += str[i+2] - '0' + 10;
                    }
                }
                if (i + 1 < n) {
                    if (str[i+1] == 'X') {
                        score += 20;
                    } else if (str[i+1] == '/') {
                        score += 10;
                    } else {
                        score += str[i+1] - '0';
                    }
                }
                score += 10;
            } else if (str[i] == '/') {
                if (i + 1 < n) {
                    if (str[i+1] == 'X') {
                        score += 20;
                    } else {
                        score += 10 + (str[i+1] - '0');
                    }
                }
                if (i > 0) {
                    if (str[i-1] == 'X') {
                        score += 20;
                    } else {
                        score += str[i-1] - '0';
                    }
                }
            } else if (str[i] == '-') {
                if (i + 1 < n) {
                    if (str[i+1] == 'X') {
                        score += 20;
                    } else if (str[i+1] == '/') {
                        score += 10;
                    } else {
                        score += str[i+1] - '0';
                    }
                }
            } else {
                score += str[i] - '0';
                if (i + 1 < n) {
                    if (str[i+1] == 'X') {
                        score += 10;
                    } else if (str[i+1] == '/') {
                        score += 10;
                    } else {
                        score += str[i+1] - '0';
                    }
                }
            }
            if (i + 1 < n && str[i+1] == 'X') {
                i++;
            }
        }
        cout << score << endl;
    }
    return 0;
}


/*

#include <cstring>
#include <stack>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <math.h>
#include <stdio.h>
#include <vector>
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
    while (cin >> str) {
        int n = str.size();
        int score = 0;
        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (str[i] == 'X') {
                if (i + 2 < n) {
                    if (str[i+2] == 'X') {
                        score += 30;
                    } else if (str[i+2] == '/') {
                        score += 20;
                    } else {
                        score += str[i+2] - '0' + 10;
                    }
                }
                if (i + 1 < n) {
                    if (str[i+1] == 'X') {
                        score += 20;
                    } else if (str[i+1] == '/') {
                        score += 10;
                    } else {
                        score += str[i+1] - '0';
                    }
                }
                score += 10;
            } else if (str[i] == '/') {
                if (i + 1 < n) {
                    if (str[i+1] == 'X') {
                        score += 20;
                    } else {
                        score += 10 + (str[i+1] - '0');
                    }
                }
                if (i > 0) {
                    if (str[i-1] == 'X') {
                        score += 20;
                    } else {
                        score += str[i-1] - '0';
                    }
                }
            } else if (str[i] == '-') {
                if (i + 1 < n) {
                    if (str[i+1] == 'X') {
                        score += 20;
                    } else if (str[i+1] == '/') {
                        score += 10;
                    } else {
                        score += str[i+1] - '0';
                    }
                }
            } else {
                score += str[i] - '0';
                if (i + 1 < n) {
                    if (str[i+1] == 'X') {
                        score += 10;
                    } else if (str[i+1] == '/') {
                        score += 10;
                    } else {
                        score += str[i+1] - '0';
                    }
                }
            }
            if (i + 1 < n && str[i+1] == 'X') {
                i++;
            }
        }
        cout << score << endl;
    }
    return 0;
}

 */
