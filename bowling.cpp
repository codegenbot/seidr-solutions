```cpp
#include <iostream>
#include <string>

int scoreOfRound(const std::string& round) {
    int score = 0;
    int frame = 0;
    int throws = 0;

    for (char c : round) {
        if (c == 'X') {
            score += 10;
            score += frame < 9 ? 10 + (throws == 0 ? 1 : 0) : 0;
            throws = throws == 0 ? 0 : 1;
        } else if (c == '/') {
            score += 10 - (round[throws - 1] - '0');
            score += frame < 9 ? 10 - (throws == 0 ? 1 : 0) : 0;
            throws = throws == 0 ? 0 : 1;
        } else {
            score += c - '0';
            throws = throws == 0 ? 1 : 0;
        }

        throws = (throws + 1) % 2;
        if (throws == 0) {
            frame++;
        }
    }

    return score;
}

int main() {
    std::string round;
    std::getline(std::cin, round);

    int score = scoreOfRound(round);
    std::cout << score << std::endl;

    return 0;
}
```