```c++
#include <string>
#include <iostream>

int bowlingScore(std::string s) {
    int score = 0;
    for (int i = 0; i < 10; ++i) {
        if (s[i] == 'X') {
            score += 30;
        } else if (isdigit(s[i])) {
            int roll1 = s[i] - '0';
            if (i < 8 && s[i + 1] == '/') {
                int roll2 = s[i + 2] - '0';
                score += roll1 + roll2;
            } else {
                score += roll1 * 2;
            }
        } else {
            int roll1 = s[i] - '0';
            if (s[i + 1] == '/') {
                int roll2 = s[i + 2] - '0';
                score += roll1 + 10;
            } else {
                int roll2 = s[i + 1] - '0';
                score += roll1 + roll2;
            }
        }
    }
    return score;
}

int main() {
    std::string input = "XXXXXXX/78";
    int score = bowlingScore(input);
    std::cout << "Score: " << score << std::endl;
    return 0;
}