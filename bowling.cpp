#include <iostream>
#include <string>

int scoreOfRound(const std::string& bowls) {
    int score = 0;
    int frame = 0;
    int bowl = 0;
    int frames[10] = {0};

    for (char c : bowls) {
        if (c == 'X') {
            frames[frame] += 10;
            if (frame < 9) {
                frames[frame] += frames[frame + 1];
                if (bowl == 0) {
                    frames[frame] += frames[frame + 2];
                }
            }
            bowl = 0;
            frame++;
        } else if (c == '/') {
            frames[frame] += 10 - (frames[frame - 1] - frames[frame - 2]);
            if (frame < 9) {
                frames[frame] += frames[frame + 1];
            }
            bowl = 0;
            frame++;
        } else if (c == '-') {
            bowl++;
        } else {
            frames[frame] += c - '0';
            if (frame < 9 && bowl == 1) {
                frames[frame] += frames[frame + 1];
                bowl = 0;
                frame++;
            } else {
                bowl++;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        score += frames[i];
    }

    return score;
}

int main() {
    std::string bowls;
    std::cin >> bowls;
    std::cout << scoreOfRound(bowls) << std::endl;
    return 0;
}