#include <iostream>
#include <string>

int calculateScore(std::string frames) {
    int score = 0;
    int frameIndex = 0;
    
    for (int i = 0; i < 10; i++) {
        if (frames[frameIndex + 1] == '/') {
            score += 10;
            if (frames[frameIndex + 2] == 'X') {
                score += 10;
            } else {
                score += frames[frameIndex + 2] - '0';
            }
            frameIndex += 2;
        } else if (frames[frameIndex] == 'X') {
            score += 10;
            if (frames[frameIndex + 2] == 'X') {
                score += 10;
                if (frames[frameIndex + 4] == 'X') {
                    score += 10;
                } else {
                    score += frames[frameIndex + 4] - '0';
                }
            } else if (frames[frameIndex + 2] == '/') {
                score += 10;
            } else {
                score += frames[frameIndex + 2] - '0';
                score += frames[frameIndex + 3] - '0';
            }
            frameIndex++;
        } else {
            score += frames[frameIndex] - '0';
            score += frames[frameIndex + 1] - '0';
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