```cpp
#include <string>

int main() {
    std::string s = "X|9/-5/8-7/X|/3-1/4-2/7-X|-1-|8-5/-9/6-X";
    int score = bowlingScore(s);
    std::cout << "The score is: " << score << std::endl;
    return 0;
}

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