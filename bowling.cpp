#include <iostream>
#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    string rolls = "";

    for (char c : s) {
        if (c == '/') {
            if (currentRolls == 1) {
                int roll = 0;
                for (int i = 0; i < rolls.length(); i++) {
                    roll = roll * 10 + rolls[i] - '0';
                }
                score += roll;
                currentRolls = 0;
            } else if (currentRolls == 2) {
                int roll = 0;
                for (int i = 0; i < 2; i++) {
                    roll = roll * 10 + rolls[i] - '0';
                }
                score += roll;
                currentRolls = 0;
            }
            rolls = "";
        } else {
            if (currentRolls < 2) {
                rolls.push_back(c);
                currentRolls++;
            } else {
                int roll = 0;
                for (int i = 0; i < 2; i++) {
                    roll = roll * 10 + c - '0';
                }
                score += roll;
                currentRolls = 1;
                rolls = "";
            }
        }
    }

    if (currentRolls > 0) {
        int roll = 0;
        for (int i = 0; i < currentRolls; i++) {
            roll = roll * 10 + rolls[i] - '0';
        }
        score += roll;
    }

    return score;
}