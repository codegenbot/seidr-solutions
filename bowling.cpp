```cpp
#include <string>
#include <vector>

int bowlingScore(std::string s) {
    int score = 0;
    bool lastRollWasStrike = false;
    bool lastRollWasSpare = false;

    for (size_t i = 0; i < s.size(); ) {
        if (s[i] == 'X') { 
            score += 10 + (lastRollWasStrike ? 10 : (lastRollWasSpare ? 5 : 0));
            lastRollWasStrike = true;
            lastRollWasSpare = false;
            i++; // skip the rest of the frame
        } else if (s[i] == '/') { 
            int nextTwoRolls = std::stoi(s.substr(i + 1, 2)) * 10 / 2;
            score += (lastRollWasStrike ? 10 : (lastRollWasSpare ? 5 : 0));
            score += nextTwoRolls;
            lastRollWasStrike = false;
            lastRollWasSpare = true;
            i += 3; // skip the rest of the frame
        } else { 
            int roll = s[i] - '0';
            if (roll == 9) lastRollWasSpare = true;
            else lastRollWasStrike = true;
            score += roll;
            i++; // move to the next character
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