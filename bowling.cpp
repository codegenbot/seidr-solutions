```
#include <iostream>

int scoreRound(std::string s) {
    int score = 0;
    int frame = 1;
    int roll = 1;

    for (int i = 0; i < s.length(); i++) {
        if (frame == 10) {
            if (s[i] == 'X') {
                score += 10;
                if (roll == 1) {
                    roll++;
                } else if (roll == 2) {
                    roll++;
                } else if (roll == 3) {
                    score += 10;
                }
            } else if (s[i] == '/') {
                score += 10;
                roll++;
            } else if (s[i] == '-') {
                roll++;
            } else {
                score += s[i] - '0';
                if (roll == 1) {
                    roll++;
                } else if (roll == 2) {
                    roll++;
                } else if (roll == 3) {
                    score += s[i] - '0';
                }
            }
        } else {
            if (s[i] == 'X') {
                score += 10;
                frame++;
            } else if (s[i] == '/') {
                score += 10 - (s[i-1] - '0');
                frame++;
            } else if (s[i] == '-') {
                if (roll == 1) {
                    roll++;
                } else if (roll == 2) {
                    frame++;
                    roll = 1;
                }
            } else {
                score += s[i] - '0';
                if (roll == 1) {
                    roll++;
                } else if (roll == 2) {
                    frame++;
                    roll = 1;
                }
            }
        }
    }

    return score;
}

int main() {
    std::string input;
    std::cin >> input;

    int score = scoreRound(input);
    std::cout << score << std::endl;

    return 0;
}
```