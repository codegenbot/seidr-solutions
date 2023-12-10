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
Based on the board game Mastermind. Given a Mastermind code and a guess, each of which are 4-character strings consisting of 6 possible characters, return the number of white pegs (correct color, wrong place) and black pegs (correct color, correct place) the codemaster should give as a clue.
For example,
input:
RRRR
RRRR
output:
0
4
input:
BOYG
GYOB
output:
4
0
input:
WYYW
BBOG
output:
0
0
input:
GGGB
BGGG
output:
2
2
input:
BBBB
OOOO
output:
0
0
*/
int main() {
    string code, guess;
    int whitePegs = 0, blackPegs = 0;
    cin >> code >> guess;

    // Handle the case where the guess is a perfect match for the code
    if (code == guess) {
        cout << "1" << endl;
        return 0;
    }

    // Use a set to keep track of the positions in the code that have already been matched
    set<int> matchedPositions;

    for (int i = 0; i < 4; i++) {
        if (!matchedPositions.count(i)) {
            for (int j = 0; j < 4; j++) {
                if (code[j] == guess[i]) {
                    blackPegs++;
                    matchedPositions.insert(j);
                    break;
                }
            }
        }
    }

    // Handle the case where there are no black pegs
    if (blackPegs == 0) {
        cout << "0" << endl;
        return 0;
    }

    // Print the number of white and black pegs
    cout << whitePegs << " " << blackPegs << endl;
    return 0;
}
```
