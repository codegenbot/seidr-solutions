#include <string>
#include <vector>

using namespace std;

int bowlingScore(const string& frames) {
    int score = 0;
    int currentRolls = 0;
    vector<int> rolls;
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
                int c1 = rolls[rolls.size() - 1];
                int c2 = rolls[rolls.size() - 2];
                score += c1 + c2;
                currentRolls = 0;
            }
            rolls.push_back(roll);
        }
    }
    return score;
}