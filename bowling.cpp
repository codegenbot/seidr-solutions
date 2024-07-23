#include <string>
#include <algorithm>

int main() {
    int score = 0;
    std::string s = "X/X/5+7-3-1/2+4/X/2-8-X/2+6/X";
    for (char c : s) {
        if (c == '/') {
            if (score % 10 + 10 <= 10) {
                score += 10;
            } else {
                int roll1 = 0;
                int roll2 = 0;
                size_t xIndex = s.find('X');
                if (xIndex != std::string::npos) {
                    if (c == '/') {
                        roll1 = xIndex;
                    } else {
                        roll1 = xIndex;
                        break;
                    }
                } else {
                    int oneIndex = s.find('1');
                    int twoIndex = s.find('2');
                    if (oneIndex != std::string::npos && twoIndex != std::string::npos) {
                        roll1 = std::min(oneIndex, 10);
                        roll2 = std::min(twoIndex - 1, 9);
                    } else {
                        throw "Invalid input";
                    }
                }
                score += roll1 + roll2;
            }
        } else if (c == 'X') {
            score += 10;
        } else if (c >= 'x' && c <= 'X') {
            int roll = s.find(c);
            if (roll != std::string::npos) {
                if (c > '5') {
                    throw "Invalid input";
                }
                score += std::min(roll, 10);
            } else {
                throw "Invalid input";
            }
        } else {
            int roll = s.find(c);
            if (roll != std::string::npos) {
                int bonusRoll1 = s.find('+') == std::string::npos ? -1 : s.find('x');
                int bonusRoll2 = s.find('-') == std::string::npos ? -1 : s.find('-');
                score += std::min(roll, 10) + std::max(std::min(bonusRoll1 - roll - 1, 9), 0);
            } else {
                throw "Invalid input";
            }
        }
    }
    return score;
}