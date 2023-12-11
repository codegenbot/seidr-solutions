```cpp
#include <iostream>
#include <string>

int computeScore(const std::string& bowlingRound) {
    int score = 0;
    int frame = 1;
    int frameScore = 1;

    for (char c : bowlingRound) {
        if (c == 'X') {
            score += 10;
            if (frameScore < 2) {
                frameScore++;
            } else {
                frame++;
                frameScore = 1;
            }
        } else if (c == '/') {
            score += (10 - score % 10);
            if (frameScore < 2) {
                frameScore++;
            } else {
                frame++;
                frameScore = 1;
            }
        } else if (c == '-') {
            score += 0;
            if (frameScore < 2) {
                frameScore++;
            } else {
                frame++;
                frameScore = 1;
            }
        } else {
            score += c - '0';
            if (frameScore < 2) {
                frameScore++;
            } else {
                frame++;
                frameScore = 1;
            }
        }
        
        if (frame > 10) {
            break;
        }
    }

    return score;
}

int main() {
    std::string bowlingRound;
    std::cout << "Enter the bowling round: ";
    std::cin >> bowlingRound;

    int totalScore = computeScore(bowlingRound);
    std::cout << "Total Score: " << totalScore << std::endl;

    return 0;
}
```