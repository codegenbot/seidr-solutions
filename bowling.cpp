```cpp
#include <string>

int main() {
    std::string s = "X||X|/8-4/X/6|1-2/9";
    int score = bowlingScore(s);
    std::cout << "The total score is: " << score << "\n";
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