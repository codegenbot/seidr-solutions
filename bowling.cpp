```cpp
#include <iostream>
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
                int nextOneRoll = stoi(s.substr(0, pos));
                score += nextOneRoll;
            } else {
                int nextTwoRolls = stoi(s);
                score += nextTwoRolls / 2;
            }
            lastRollWasStrike = false;
            lastRollWasSpare = true;
        } else if (c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9') {
            int roll = c - '0';
            if (c == '9') lastRollWasSpare = true;
            else lastRollWasStrike = true;
            score += roll;
        }
    }

    return score;
}

int main() {
    std::string s = "XXXXX/6/5/X-8/X/X-4/X/X/9/-7/-5";
    int score = bowlingScore(s);
    std::cout << "The score is: " << score << std::endl;
    return 0;
}