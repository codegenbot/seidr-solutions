#include <iostream>
#include <string>

int getFrameScore(const std::string& frame) {
    int score = 0;
    int frameSize = frame.size();
  
    for (int i = 0; i < frameSize; i++) {
        char current = frame[i];

        if (isdigit(current)) {
            score += current - '0';
        }
        else if (current == 'X') {
            score += 10;
            if (i < frameSize - 2) {
                score += (frame[i + 1] == 'X') ? 10 : (frame[i + 1] - '0');
                score += (frame[i + 2] == 'X') ? 10 : (frame[i + 2] - '0');
            }
        }
        else if (current == '/') {
            if (i < frameSize - 1) {
                score += 10 - (frame[i - 1] - '0');
                score += (frame[i + 1] == 'X') ? 10 : (frame[i + 1] - '0');
            }
        }
    }
  
    return score;
}

int main() {
    std::string frame;
    std::getline(std::cin, frame);
    std::cout << getFrameScore(frame) << std::endl;
    return 0;
}