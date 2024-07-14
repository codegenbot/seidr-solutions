#include <string>
#include <vector>

using namespace std;

int bowlingScore(const string& frames) {
    int score = 0;
    int currentRolls = 0;
    int c1 = 0;
    int c2 = 0;
    for (char c : frames) {
        if (c == 'X') {
            score += 30;
            currentRolls = 2;
        } else if (c == '/') {
            score += 10 + currentRolls;
            currentRolls = 0;
        } else {
            int roll = c - '0';
            score += roll;
            currentRolls++;
            if (currentRolls == 2) {
                if (c1 > 0 && c2 > 0) {
                    score += c1 + c2;
                }
                c1 = 0;
                c2 = 0;
            } else if (currentRolls == 1) {
                c1 = roll;
            } else {
                c2 = roll;
            }
        }
    }
    return score;
}