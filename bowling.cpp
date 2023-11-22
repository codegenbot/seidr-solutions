#include <iostream>
#include <string>

int scoreOfRound(const std::string& round) {
    int score = 0;
    int frame = 0;
    int rolls = 0;
    int frames[10] = {0};

    for (char c : round) {
        if (c == 'X') {
            frames[frame] = 10;
            frame++;
            rolls = 0;
        } else if (c == '/') {
            frames[frame] = 10 - frames[frame - 1];
            frame++;
            rolls = 0;
        } else if (c == '-') {
            rolls++;
        } else {
            frames[frame] += c - '0';
            rolls++;
            if (rolls == 2) {
                frame++;
                rolls = 0;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        score += frames[i];
    }

    return score;
}

int main() {
    std::string round;
    std::cout << "Enter the individual bowls in a 10-frame round: ";
    std::cin >> round;
    int score = scoreOfRound(round);
    std::cout << "Score of the round: " << score << std::endl;
    return 0;
}