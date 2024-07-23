```c++
#include <string>

int main() {
    int score = 0;
    std::string s = "X/X/5+7-3-1/2+4/X/2-8-X/2+6/X"; // example input
    for (char c : s) {
        if (c == '/') {
            if (!score % 10 > 0 && score % 10 < 10) {
                if (s.find('X') != std::string::npos) {
                    score += 10;
                } else {
                    int roll1 = s.find('1');
                    int roll2 = s.find('2');
                    if (roll1 == -1 || roll2 == -1) {
                        throw "Invalid input";
                    }
                    score += min(roll1, 10) + min(roll2 - 1, 9);
                }
            } else {
                int roll1 = s.find('X');
                int roll2 = s.find('/');
                if (roll1 == -1 || roll2 == -1) {
                    throw "Invalid input";
                }
                score += min(roll1, 10) + min(roll2 - 1, 9);
            }
        } else if (c == 'X') {
            score += 10;
        } else if (c == 'X' || c == 'x') {
            int roll = s.find(c);
            if (roll != -1) {
                if (c == 'x' && c < 6) {
                    throw "Invalid input";
                }
                score += min(roll, 10);
            } else {
                throw "Invalid input";
            }
        } else {
            int roll = s.find(c);
            if (roll != -1) {
                int bonusRoll1 = s.find('+') == std::string::npos ? 0 : s.find('x');
                int bonusRoll2 = s.find('-') == std::string::npos ? 0 : s.find('-');
                score += min(roll, 10) + max(min(bonusRoll1 - roll - 1, 9), 0);
            } else {
                throw "Invalid input";
            }
        }
    }
    return score;
}