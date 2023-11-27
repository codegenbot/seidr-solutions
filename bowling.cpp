#include <iostream>
#include <string>

int getScore(const std::string& bowls) {
    int score = 0;
    int frame = 0;
    int bowl = 0;
    int frames[10] = { 0 };

    for (char c : bowls) {
        if (c == 'X') {
            frames[frame++] = 10;
            if (frame == 10) break;
        }
        else if (c == '/') {
            frames[frame++] = 10 - frames[frame - 1];
            if (frame == 10) break;
            bowl = 0;
        }
        else if (c == '-') {
            bowl++;
        }
        else {
            frames[frame] += c - '0';
            if (bowl == 1) {
                frame++;
                if (frame == 10) break;
            }
            else {
                bowl++;
            }
        }
    }

    for (int i = 0; i < frame - 1; i++) {
        score += frames[i];
        if (frames[i] == 10) {
            score += frames[i + 1] + frames[i + 2];
        }
        else if (frames[i] + frames[i + 1] == 10) {
            score += frames[i + 2];
        }
    }

    return score;
}

int main() {
    std::string bowls;
    std::cin >> bowls;
    std::cout << getScore(bowls) << std::endl;
    return 0;
}