#include <iostream>
#include <vector>

int bowling(std::string input) {
    int score = 0;
    std::vector<int> rolls;
    for (char c : input) {
        if (c == '/') {
            if (rolls.size() >= 2) {
                int prevRolls = rolls.back();
                rolls.pop_back();
                if (prevRolls + rolls.back() < 10) {
                    score += 10 - prevRolls;
                } else {
                    score += 10;
                }
            }
        } else {
            rolls.push_back(c - '0');
        }
    }
    for (int roll : rolls) {
        if (roll == 10) {
            score += 10;
        } else {
            score += roll + rolls[rolls.size() - 2] - rolls[rolls.size() - 1];
        }
    }
    return score;