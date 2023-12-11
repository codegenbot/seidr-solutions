#include <iostream>
#include <string>

int getFrameScore(const std::string& frames, int& index) {
    int score = 0;
    
    if (frames[index] == 'X') {
        score = 10;
        index++;
    } else if (frames[index + 1] == '/') {
        score = 10;
        index += 2;
    } else {
        score = frames[index] - '0' + frames[index + 1] - '0';
        index += 2;
    }
    
    return score;
}

int calculateScore(const std::string& frames) {
    int score = 0;
    int index = 0;
    
    for (int frame = 0; frame < 10; frame++) {
        if (frames[index] == 'X') {
            score += getFrameScore(frames, index);
        } else if (frames[index + 1] == '/') {
            score += getFrameScore(frames, index);
        } else {
            score += getFrameScore(frames, index);
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