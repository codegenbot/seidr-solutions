#include <iostream>
#include <vector>
#include <string>

using namespace std;

int bowlingScore(const string& input) {
    int score = 0;
    vector<int> rolls;
    
    for (char c : input) {
        if (c == '/') {
            if (rolls.size() > 0) {
                int previousRoll = rolls.back();
                if (previousRoll < 10) {
                    if (previousRoll + 1 + rolls[rolls.size()-2] <= 10) {
                        score += 10;
                    } else {
                        score += 10 - previousRoll;
                    }
                } else {
                    score += 10;
                }
            }
        } else if (isdigit(c)) {
            rolls.push_back(c - '0');
        }
    }

    for (int roll : rolls) {
        score += roll;
    }

    return score;
}

int main() { return bowlingScore("10/8/,7-,5-3,1/2/6/4/-"); }