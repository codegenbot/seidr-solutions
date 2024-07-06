#include <iostream>
#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    vector<int> rolls;

    for (char c : s) {
        if (c == '/') {
            if (currentRolls == 1) {
                score += rolls[0] + rolls[1];
                rolls.erase(rolls.begin());
                rolls.erase(rolls.begin());
                currentRolls = 0;
            } else if (currentRolls < 2) {
                int roll = 10 - '0';
                for (int i = 0; c != '/'; i++) {
                    c = s[i];
                    roll = roll * 10 + c - '0';
                }
                score += roll;
                currentRolls = 1;
            } else {
                if (rolls.back() + rolls[rolls.size() - 2] >= 10) {
                    score += 10;
                } else {
                    score += rolls[rolls.size() - 2] + rolls.back();
                }
                rolls.erase(rolls.end() - 2, rolls.end());
                currentRolls = 0;
            }
        } else {
            rolls.push_back(c - '0');
            if (currentRolls < 2) {
                currentRolls++;
            } else {
                int roll = 0;
                for (int i = 0; i < 2 && s[i] != '/'; i++) {
                    roll = roll * 10 + s[i] - '0';
                }
                score += roll;
                currentRolls = 1;
            }
        }
    }

    if (currentRolls == 2) {
        int roll = 0;
        for (int i = 0; i < 2; i++) {
            roll = roll * 10 + rolls[i] - '0';
        }
        score += roll;
    } else if (currentRolls > 1) {
        int roll = 0;
        for (int i = 0; i < currentRolls; i++) {
            roll = roll * 10 + rolls[rolls.size() - 1] - '0';
            rolls.pop_back();
        }
        score += roll;
    }

    return score;
}