#include <iostream>
#include <string>

int bowlingScore(const char* s) {
    int score = 0;
    for (int i = 0; i < 20; ++i) {
        if (s[i] == 'X') {
            score += 30;
        } else if (isdigit(s[i])) {
            int roll1 = s[i] - '0';
            if (i < 18 && s[i + 1] == '/') {
                int roll2 = s[i + 2] - '0';
                if (i < 19) {
                    score += roll1 + roll2;
                } else {
                    score += roll1 + roll2;
                }
            } else {
                score += roll1 * 2;
            }
        } else {
            if (s[i] == '-') {
                continue;
            }
            int roll1 = s[i] - '0';
            if (i < 19) {
                int roll2 = s[i + 1] - '0';
                score += roll1 + roll2;
            } else {
                score += roll1;
            }
        }
    }
    return score;
}

int main() {
    std::string input = "X/22/X--;32/-5/X-8/42/X2/13/-9/X10";
    int score = bowlingScore(input.c_str());
    std::cout << "The bowling score is: " << score << std::endl;
    return 0;
}