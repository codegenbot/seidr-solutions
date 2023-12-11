#include <iostream>
#include <string>

int getScore(const std::string& frames) {
    int score = 0;
    int frameIndex = 0;
    
    for (int i = 0; i < frames.length(); i++) {
        if (frameIndex == 10) {
            break;
        }
        
        if (frames[i] == 'X') {
            score += 10;
            if (frames[i+2] == 'X') {
                score += 10;
            } else if (frames[i+2] == '/') {
                score += 10 - (frames[i+1] - '0');
            } else {
                score += frames[i+1] - '0' + frames[i+2] - '0';
            }
            frameIndex++;
        } else if (frames[i] == '/') {
            score += 10 - (frames[i-1] - '0');
            if (frames[i+1] == 'X') {
                score += 10;
            } else {
                score += frames[i+1] - '0';
            }
            frameIndex++;
        } else {
            score += frames[i] - '0';
            if (frames[i+1] == '/') {
                score += 10 - (frames[i] - '0');
            }
            frameIndex++;
        }
    }
    
    return score;
}

int main() {
    std::string frames;
    std::cin >> frames;
    
    int score = getScore(frames);
    std::cout << score << std::endl;
    
    return 0;
}