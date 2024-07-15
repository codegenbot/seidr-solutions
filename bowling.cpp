#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string bowls;
    std::cin >> bowls;
    int score = 0, frame = 0, ball = 0;
    int frames[10] = {0};
    
    for (char c : bowls) {
        if (c == 'X') {
            frames[frame] = 10;
            frame++;
        } else if (c == '/') {
            frames[frame] = 10 - frames[frame - 1];
            if (frame > 1 && bowls[2 * frame - 3] == '/') {
                frames[frame - 1] = 20 - frames[frame - 2];
            }
            frame++;
            ball = 0;
        } else if (c == '-') {
            ball++;
        } else {
            frames[frame] += c - '0';
            ball++;
            if (ball == 2) {
                frame++;
                ball = 0;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        score += frames[i];
    }

    std::cout << score << std::endl;

    return 0;
}