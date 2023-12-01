#include <iostream>
#include <string>

int getFrameScore(const std::string& frame) {
    int score = 0;
    int frameIndex = 0;

    for (int i = 0; i < 10; ++i) {
        if (frame[frameIndex] == 'X') {
            score += 10;
            frameIndex++;
        } else if (frame[frameIndex + 1] == '/') {
            score += 10;
            frameIndex += 2;
        } else {
            score += frame[frameIndex] - '0';
            score += frame[frameIndex + 1] - '0';
            frameIndex += 2;
        }
    }

    return score;
}

int main() {
    std::string frame;
    std::cin >> frame;

    int score = getFrameScore(frame);
    std::cout << score << std::endl;

    return 0;
}