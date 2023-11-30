#include <iostream>
#include <string>

int getScore(std::string input) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    int frameScore[10] = {0};

    for (char c : input) {
        if (c == 'X') {
            frameScore[frame - 1] += 10;
            if (frame < 10) {
                frameScore[frame] += 10;
            }
            if (frame < 9) {
                frameScore[frame + 1] += 10;
            }
            frame++;
            ball = 0;
        } else if (c == '/') {
            frameScore[frame - 1] += 10 - frameScore[frame - 1 - ball];
            if (frame < 10) {
                frameScore[frame] += 10;
            }
            frame++;
            ball = 0;
        } else if (c == '-') {
            ball++;
        } else {
            frameScore[frame - 1] += c - '0';
            ball++;
            if (ball == 2 || c == '9') {
                frame++;
                ball = 0;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        score += frameScore[i];
    }

    return score;
}

int main() {
    std::string input;
    std::cin >> input;

    int score = getScore(input);
    std::cout << score << std::endl;

    return 0;
}