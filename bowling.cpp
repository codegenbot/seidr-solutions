```cpp
#include <iostream>
#include <string>

int scoreOfRound(const std::string& bowls) {
    int score = 0;
    int frame = 0;
    int bowl = 0;

    for (int i = 0; i < bowls.length(); i++) {
        if (frame == 10) {
            break;
        }

        if (bowls[i] == 'X') {
            score += 10;
            if (i + 1 < bowls.length()) {
                score += (bowls[i + 1] == 'X') ? 10 : (isdigit(bowls[i + 1]) ? bowls[i + 1] - '0' : 0);
            }
            if (i + 2 < bowls.length()) {
                score += (bowls[i + 2] == 'X') ? 10 : (isdigit(bowls[i + 2]) ? bowls[i + 2] - '0' : 0);
            }
            frame++;
        } else if (isdigit(bowls[i])) {
            score += bowls[i] - '0';
            bowl++;

            if (bowl == 2 || (i + 1 < bowls.length() && bowls[i + 1] == '/')) {
                if (i + 1 < bowls.length()) {
                    score += (bowls[i + 1] == '/') ? 10 - (bowls[i] - '0') : 0;
                }
                frame++;
                bowl = 0;
            }
        }
    }

    return score;
}

int main() {
    std::string bowls;
    std::getline(std::cin, bowls);

    int roundScore = scoreOfRound(bowls);
    std::cout << roundScore << std::endl;

    return 0;
}
```