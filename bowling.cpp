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
                score += (round[roll + 1] == '/') ? (10 - (round[roll - 1] - '0')) : (round[roll + 1] - '0');
                score += (round[roll + 2] == 'X') ? 10 : (round[roll + 2] == '/' ? (10 - (round[roll + 1] - '0')) : (round[roll + 2] - '0'));
            }
            roll++;
        } else if (c == '/') {
            score += (10 - (round[roll - 1] - '0'));
            if (frame < 10) {
                score += (round[roll + 1] == 'X') ? 10 : (round[roll + 1] - '0');
            }
            roll++;
        } else if (c == '-') {
            // do nothing
        } else {
            score += (c - '0');
            if (frame < 10 && round[roll + 1] == '/') {
                score += 10;
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