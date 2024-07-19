#include <string>
#include <vector>

int bowlingScore(std::string s) {
    int score = 0;
    int currentFrame = 0;
    std::vector<int> frames(10);
    
    for (char c : s) {
        if (c == '/') {
            currentFrame++;
            continue;
        }
        
        if (c >= '1' && c <= '9') {
            while (c != '/' && c >= '0' && c <= '9') {
                frames[currentFrame] = frames[currentFrame] * 10 + (c - '0');
                if (currentFrame < 9) {
                    currentFrame++;
                }
                break;
            }
        }
    }
    
    for (int i : frames) {
        score += i;
    }
    
    return score;
}

char next(char c, std::string s) {
    int i = s.find(c);
    return s[i + 1];
}