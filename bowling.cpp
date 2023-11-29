#include <iostream>
#include <string>

int getScore(const std::string& input) {
    int score = 0;
    int frame = 0;
    int ball = 0;
    int frames[10] = {0};
    
    for (char c : input) {
        if (c == 'X') {
            frames[frame++] = 10;
            ball = 0;
        } else if (c == '/') {
            frames[frame++] = 10 - frames[frame-1];
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
    
    return score;
}

int main() {
    std::string input;
    std::cin >> input;
    
    int score = getScore(input);
    std::cout << score << std::endl;
    
    return 0;
}