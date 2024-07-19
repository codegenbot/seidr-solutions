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
            bool strike = false;
            while (c != '/' && c >= '0' && c <= '9') {
                frames[currentFrame] *= 10 + (c - '0');
                if (frames[currentFrame] == 10) {
                    strike = true;
                    break;
                }
                c = next(c, s);
            }
            
            if (!strike) {
                score += frames[currentFrame];
            } else if (currentFrame < 9) {
                score += 10 + frames[currentFrame + 1] + frames[currentFrame + 2];
                currentFrame += 2;
            } else {
                score += 10 + frames[currentFrame + 1];
            }
        }
    }
    
    return score;
}

char next(char c, std::string s) {
    int i = s.find(c);
    return s[i + 1];
}