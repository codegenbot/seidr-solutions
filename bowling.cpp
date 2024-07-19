```cpp
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
                c = next(c, s);
            }
            
            if (frames[currentFrame] == 10) {
                score += 10;
            } else {
                score += frames[currentFrame];
            }
        }
    }
    
    return score;
}

char next(char c, std::string s) {
    int i = s.find(c);
    return s[i + 1];
}