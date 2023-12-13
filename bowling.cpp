```cpp
#include <iostream>
#include <string>

int scoreOfRound(const std::string& bowls) {
    int score = 0;
    int bowlIndex = 0;

    for (int frame = 1; frame <= 10; ++frame) {
        if (bowls[bowlIndex] == 'X') {
            score += 10;
            if (frame < 10) {
                if (bowls[bowlIndex + 2] == '/')
                    score += 10;
                else
                    score += (bowls[bowlIndex + 1] - '0') + (bowls[bowlIndex + 2] - '0');
                bowlIndex += 1;
            } else {
                score += (bowls[bowlIndex + 1] - '0') + (bowls[bowlIndex + 2] - '0');
                break;
            }
        } else if (bowls[bowlIndex + 1] == '/') {
            score += 10;
            bowlIndex += 2;
            if (frame < 10)
                score += (bowls[bowlIndex + 1] - '0');
        } else {
            score += (bowls[bowlIndex] - '0') + (bowls[bowlIndex + 1] - '0');
            bowlIndex += 2;
        }
    }

    return score;
}

int main() {
    std::string bowls;
    std::cin >> bowls;
    int score = scoreOfRound(bowls);
    std::cout << score << std::endl;

    return 0;
}
```