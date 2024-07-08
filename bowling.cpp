```cpp
#include <string>
#include <vector>
#include <iostream>

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
            int nextTwoRolls = std::stoi(s.substr(s.find('/') + 1, 2)) * 10 / 2;
            score += (lastRollWasStrike ? 10 : (lastRollWasSpare ? 5 : 0));
            score += nextTwoRolls;
            lastRollWasStrike = false;
            lastRollWasSpare = true;
        } else {
            int roll = c - '0';
            score += roll;
            if (roll == 9) lastRollWasSpare = true;
            else lastRollWasStrike = true;
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