#include <iostream>
#include <string>

int calculateScore(const std::string& frames) {
    int score = 0;
    int frameIndex = 0;
    std::string framePoints {"0123456789/X-"};
    
    for (int i = 0; i < frames.length(); i++) {
        if (frames[i] == 'X') {
            score += 10;
            if (frameIndex < 9) {
                if (frames[i + 2] == '/') {
                    score += 10;
                } else {
                    score += framePoints.find(frames[i + 1]);
                    score += framePoints.find(frames[i + 2]);
                }
            }
            frameIndex++;
        } else if (frames[i] == '/') {
            score += 10 - framePoints.find(frames[i - 1]);
            if (frameIndex < 9) {
                score += framePoints.find(frames[i + 1]);
            }
            frameIndex++;
        } else if (frames[i] == '-') {
            score += 0;
            if (frameIndex < 9) {
                score += framePoints.find(frames[i + 1]);
            }
            frameIndex++;
        } else {
            score += framePoints.find(frames[i]);
            if (frameIndex % 2 != 0 && framePoints.find(frames[i - 1]) == 10) {
                score += framePoints.find(frames[i]);
            }
            frameIndex++;
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