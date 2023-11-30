#include <iostream>
#include <string>

int getFrameScore(const std::string& frame) {
    int score = 0;
    int frameSize = frame.size();
    
    for (int i = 0; i < frameSize; ++i) {
        if (frame[i] == 'X') {
            score += 10;
            
            if (i < frameSize - 2) {
                if (frame[i + 2] == '/') {
                    score += 10;
                } else if (frame[i + 1] == 'X') {
                    score += 10;
                    
                    if (i < frameSize - 4) {
                        score += (frame[i + 4] == 'X' ? 10 : frame[i + 4] - '0');
                    }
                } else {
                    score += (frame[i + 1] == '/' ? 10 : frame[i + 1] - '0');
                    score += (frame[i + 2] == '/' ? 10 - (frame[i + 1] - '0') : frame[i + 2] - '0');
                }
            }
        } else if (frame[i] == '/') {
            score += 10 - (frame[i - 1] - '0');
            
            if (i < frameSize - 2) {
                score += (frame[i + 2] == 'X' ? 10 : frame[i + 2] - '0');
            }
        } else {
            score += frame[i] - '0';
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