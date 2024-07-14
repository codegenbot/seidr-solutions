#include <vector>
#include <string> // Added this line
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    vector<int> rolls(10);

    for (char c : s) {
        if (c == '/') {
            if (roll == 1) {
                if (rolls[0] + rolls[1] < 10) {
                    score += 10 - (rolls[0] + rolls[1]);
                } else {
                    score += rolls[0] + rolls[1];
                }
                roll = 0;
            } else {
                rolls[9 - roll] = c == 'X' ? 10 : (c - '0');
                roll++;
            }
        } else if (c == 'X') {
            score += 10;
            rolls[9 - roll] = 10;
            roll++;
        } else {
            rolls[9 - roll] = c - '0';
            roll++;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (rolls[i] == 10) {
            score += 10 + rolls[i+1] + rolls[i+2];
            i += 2;
        } else {
            score += rolls[i];
        }
    }

    return score;
}