```cpp
#include <iostream>
#include <string>

int calculateScore(const std::string& input) {
    int score = 0;
    int frame = 1;
    int rolls = 0;
    int frameScore = 0;
    bool spare = false;
    bool strike = false;

    for (char c : input) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                if (strike) {
                    score += 10;
                }
                strike = true;
                frame++;
                rolls = 0;
            }
        } else if (c == '/') {
            score += 10 - frameScore;
            if (frame < 10) {
                if (strike) {
                    score += 10;
                }
                spare = true;
                frame++;
                rolls = 0;
            }
        } else if (c == '-') {
            if (frame < 10) {
                if (strike) {
                    score += 10;
                }
                frame++;
                rolls = 0;
            }
        } else {
            int pins = c - '0';
            score += pins;
            frameScore += pins;

            if (spare) {
                score += pins;
                spare = false;
            }

            if (strike) {
                score += pins;
                strike = false;
            }

            rolls++;
            if (rolls == 2) {
                frame++;
                rolls = 0;
            }
        }
    }

    return score;
}

int main() {
    std::string input;
    std::cin >> input;

    std::cout << calculateScore(input) << std::endl;

    return 0;
}
```