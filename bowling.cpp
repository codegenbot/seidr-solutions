#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == 'X') { // strike
            score += 10 + 10 + 10;
            currentRolls = 2;
        } else if (c == '/') { // spare
            int nextChar = s.find('/');
            int bonus = (nextChar != string::npos) ? 10 - (nextChar > 0 ? s[nextChar - '0'] : 0) : 10;
            score += 10 + bonus;
            currentRolls = 2;
        } else { // normal roll
            int roll = c - '0';
            if (currentRolls == 1 && s[s.length() - 2] == '/') {
                score += roll + 10 - '0' - '0';
                break;
            }
            score += roll;
            currentRolls++;
            if (currentRolls == 2) {
                currentFrame++;
            }
        }

        if (currentFrame > 9) {
            break;
        }
    }

    return score;
}