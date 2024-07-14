#include <string>
#include <vector>

using namespace std;

int bowlingScore(const string& frames) {
    int score = 0;
    int currentRolls = 0;
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
                int c1 = roll, c2 = c - '0';
                score += c1 + c2;
                currentRolls = 0;
            }
        }
    }
    return score;
}