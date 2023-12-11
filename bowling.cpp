```cpp
#include <iostream>
#include <string>

int calculateScore(const std::string& frames) {
    int score = 0;
    int frameIndex = 0;

    for (int frame = 0; frame < 10; frame++) {
        if (frames[frameIndex] == 'X') {
            score += 10;
            if (frame < 9) {
                if (frames[frameIndex + 2] == '/') {
                    score += 10;
                } else {
                    score += (frames[frameIndex + 1] - '0') + (frames[frameIndex + 2] - '0');
                }
                frameIndex += 1;
            } else {
                score += (frames[frameIndex + 1] - '0') + (frames[frameIndex + 2] - '0');
                frameIndex += 2;
            }
        } else if (frames[frameIndex + 1] == '/') {
            score += 10;
            if (frame < 9) {
                score += (frames[frameIndex + 2] - '0');
            }
            frameIndex += 2;
        } else {
            score += (frames[frameIndex] - '0') + (frames[frameIndex + 1] - '0');
            frameIndex += 2;
        }
    }

    return score;
}

int main() {
    std::string frames;
    std::cin >> frames;

    int score = calculateScore(frames);
    std::cout << score << std::endl;

    return 0;
}
```