```
#include <iostream>
#include <string>

int calculateScore(std::string bowls) {
    int score = 0;
    int frame = 0;
    int throws = 0;

    for (char c : bowls) {
        if (c == 'X') {
            score += 10;
            if (throws < 18) {
                if (throws % 2 == 0) {
                    score += 10;
                } else {
                    score += (bowls[throws + 2] == 'X') ? 10 : bowls[throws + 2] - '0';
                    if (throws < 16 && bowls[throws + 2] == 'X' && throws % 2 == 0 && bowls[throws + 4] == '/') {
                        score += 10;
                    }
                }
            }
            if (frame < 9) {
                frame++;
            }
            throws += 2;
        } else if (c == '/') {
            score += 10 - (bowls[throws - 1] - '0');
            score += (throws < 18 && bowls[throws + 1] == 'X') ? 10 : bowls[throws + 1] - '0';
            if (throws < 16 && bowls[throws + 1] == 'X' && throws % 2 == 0 && bowls[throws + 3] == '/') {
                score += 10;
            }
            frame++;
            throws += 2;
        } else if (c == '-') {
            if (throws % 2 == 0) {
                frame++;
            }
            throws++;
        } else {
            score += c - '0';
            if (throws % 2 == 0 && frame < 9 && (throws < 18 || (throws < 19 && c != '0'))) {
                if (c == '0' && throws < 19 && bowls[throws + 1] == '/') {
                    score += 10;
                }
                throws++;
            } else {
                throws++;
                frame++;
            }
        }
    }

    return score;
}

int main() {
    std::string bowls;
    std::cin >> bowls;

    int score = calculateScore(bowls);

    std::cout << score << std::endl;
    return 0;
}
```