#include <iostream>
#include <string>

int calculateScore(const std::string& round) {
    int score = 0;
    int frame = 1;
    int bowl = 0;
    int bowls[21];

    for (char c : round) {
        if (c == 'X') {
            bowls[bowl++] = 10;
            if (frame < 10) {
                bowls[bowl++] = 0;
            }
        } else if (c == '/') {
            bowls[bowl++] = 10 - bowls[bowl - 1];
        } else if (c == '-') {
            bowls[bowl++] = 0;
        } else {
            bowls[bowl++] = c - '0';
        }
    }

    for (int i = 0; i < 10; i++) {
        if (bowls[i * 2] == 10) {
            score += 10 + bowls[(i + 1) * 2] + bowls[(i + 1) * 2 + 1];
            if (bowls[i * 2 + 2] == 10) {
                score += bowls[(i + 2) * 2];
            }
        } else if (bowls[i * 2] + bowls[i * 2 + 1] == 10) {
            score += 10 + bowls[(i + 1) * 2];
        } else {
            score += bowls[i * 2] + bowls[i * 2 + 1];
        }
    }

    return score;
}

int main() {
    std::string round;
    std::cout << "Enter the round: ";
    std::cin >> round;

    int score = calculateScore(round);

    std::cout << "Score: " << score << std::endl;

    return 0;
}