#include <iostream>
#include <string>

int getScore(const std::string& bowling) {
    int score = 0;
    int frame = 0;
    int roll = 0;
    int frames[10] = {0};

    for (char c : bowling) {
        if (c == 'X') {
            frames[frame] += 10;
            if (frame > 0 && roll == 0) {
                frames[frame - 1] += 10;
            }
            if (frame > 1 && roll == 0) {
                frames[frame - 2] += 10;
            }
            roll = (roll + 1) % 2;
            if (roll == 0) {
                frame++;
            }
        } else if (c == '/') {
            frames[frame] += 10 - frames[frame];
            if (frame > 0 && roll == 0) {
                frames[frame - 1] += 10 - frames[frame];
            }
            roll = (roll + 1) % 2;
            if (roll == 0) {
                frame++;
            }
        } else if (c == '-') {
            roll = (roll + 1) % 2;
            if (roll == 0) {
                frame++;
            }
        } else {
            frames[frame] += c - '0';
            if (frame > 0 && roll == 0) {
                frames[frame - 1] += c - '0';
            }
            roll = (roll + 1) % 2;
            if (roll == 0) {
                frame++;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        score += frames[i];
    }

    return score;
}

int main() {
    std::string bowling;
    std::cout << "Enter the bowling string: ";
    std::cin >> bowling;
    std::cout << "Score: " << getScore(bowling) << std::endl;

    return 0;
}