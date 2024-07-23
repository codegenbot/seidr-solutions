```c++
#include <string>
#include <cctype>

int main() {
    int score = 0;
    std::string s = "X/X/5+7-3-1/2+4/X/2-8-X/2+6/X"; 
    for (char c : s) {
        if (c == '/') {
            if (score % 10 > 0 && score % 10 < 10) {
                int roll1 = -1;
                int roll2 = -1;
                int foundX = s.find('X');
                if (foundX != std::string::npos) {
                    if (roll1 == -1) {
                        roll1 = foundX;
                    }
                } else {
                    size_t pos = 0;
                    while ((pos = s.find('/', pos)) != std::string::npos) {
                        int val1 = std::stoi(s.substr(0, pos).erase(0, 1));
                        if (val1 > 10) {
                            roll1 = 10;
                            break;
                        } else if (val1 < 2) {
                            roll1 = val1;
                            break;
                        }
                        int val2 = std::stoi(s.substr(pos + 1).erase(0, 1));
                        if (val2 > 10) {
                            roll2 = 10 - roll1;
                            break;
                        } else if (val2 < 2) {
                            roll2 = val2;
                            break;
                        }
                    }
                }
                score += roll1 + roll2;
            } else {
                int foundX = s.find('X');
                int foundSlash = s.find('/');
                int val1 = std::stoi(s.substr(0, foundSlash).erase(0, 1));
                if (val1 > 10) {
                    score += 10;
                } else if (val1 < 2) {
                    score += val1;
                }
            }
        } else if (c == 'X' || c == 'x') {
            int roll = -1;
            size_t pos = 0;
            while ((pos = s.find(c, pos)) != std::string::npos) {
                if (c == 'x') {
                    if (std::stoi(s.substr(0, pos).erase(0, 1)) < 6) {
                        throw "Invalid input";
                    }
                }
                score += min(pos, 10);
            }
        } else {
            int val = std::stoi(s.erase(0, 1));
            if (val > 10 || val < 2) {
                int bonusRoll1 = s.find('+');
                int bonusRoll2 = s.find('-');
                if (bonusRoll1 == -1) {
                    score += min(val, 10);
                } else if (bonusRoll2 != -1) {
                    score += min(val, 10) + max(min(bonusRoll1 - val - 1, 9), 0) +
                        max(min(bonusRoll2 - val - 1, 9), 0);
                } else {
                    throw "Invalid input";
                }
            } else {
                score += val;
            }
        }
    }
    return score;
}