#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    bool lastRollWasStrike = false;
    bool lastRollWasSpare = false;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + (lastRollWasStrike ? 10 : (lastRollWasSpare ? 5 : 0));
            lastRollWasStrike = true;
            lastRollWasSpare = false;
        } else if (c == '/') {
            size_t pos = s.find('/');
            if (pos != std::string::npos) {
                int nextOneRoll =stoi(s.substr(pos+1)); 
                score += nextOneRoll;
            } else {
                int nextTwoRolls =stoi(s); 
                score += nextTwoRolls / 2;
            }
            lastRollWasStrike = false;
            if (score < 10) {
                lastRollWasSpare = true;
            } else {
                lastRollWasSpare = false;
            }
        } else {
            int roll = c - '0';
            if (c == '9') lastRollWasSpare = true;
            else lastRollWasStrike = true;
            score += roll;
        }
    }

    return score;