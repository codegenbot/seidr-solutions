#include <iostream>
#include <string>

int calculateScore(const std::string& bowlingRound) {
    int score = 0;
    int frame = 0;
    int rolls = 0;
    int frameScore[10] = {0};

    for (int i = 0; i < bowlingRound.length(); i++) {
        char c = bowlingRound[i];

        if (c == 'X') {
            frameScore[frame] += 10;
            rolls++;
            if (rolls == 2) {
                frame++;
                rolls = 0;
            }
        } else if (c == '/') {
            frameScore[frame] += (10 - frameScore[frame-1]);
            rolls++;
            if (rolls == 2) {
                frame++;
                rolls = 0;
            }
        } else if (c == '-') {
            rolls++;
            if (rolls == 2) {
                frame++;
                rolls = 0;
            }
        } else {
            frameScore[frame] += (c - '0');
            rolls++;
            if (rolls == 2) {
                frame++;
                rolls = 0;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        score += frameScore[i];
    }

    return score;
}

int main() {
    std::string bowlingRound;
    std::getline(std::cin, bowlingRound);

    int score = calculateScore(bowlingRound);
    std::cout << score << std::endl;

    return 0;
}