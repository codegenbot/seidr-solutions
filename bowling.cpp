```cpp
#include <iostream>
#include <string>

int scoreRound(const std::string& round) {
    int score = 0;
    int frame = 1;
    int roll = 0;

    for (char c : round) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                score += (round[roll + 1] == 'X') ? 10 : (round[roll + 1] - '0');
                if (round[roll + 2] == 'X') {
                    score += 10;
                } else if (round[roll + 2] == '/') {
                    score += (10 - (round[roll + 1] - '0'));
                } else {
                    score += (round[roll + 2] - '0');
                }
            }
            roll++;
        } else if (c == '/') {
            score += (10 - (round[roll - 2] - '0'));
            if (frame < 10) {
                score += (round[roll + 1] == 'X') ? 10 : (round[roll + 1] - '0');
            }
            roll++;
        } else if (c == '-') {
            roll++;
        } else {
            score += (c - '0');
            if (frame < 10 && roll % 2 == 1) {
                if (round[roll - 1] == '/') {
                    score += (10 - (c - '0'));
                }
            }
            roll++;
        }

        if (roll % 2 == 0) {
            frame++;
        }

        if (frame > 10) {
            break;
        }
    }

    return score;
}

int main() {
    std::string round;
    std::cin >> round;

    int score = scoreRound(round);
    std::cout << score << std::endl;

    return 0;
}
```