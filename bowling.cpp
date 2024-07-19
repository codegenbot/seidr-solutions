#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int currentFrame = 0;
    vector<int> frames(10);
    
    for (char c : s) {
        if (c == '/') {
            currentFrame++;
            continue;
        }
        
        if (c >= '1' && c <= '9') {
            int strike = false;
            while (c != '/' && c >= '0' && c <= '9') {
                frames[currentFrame] *= 10 + (c - '0');
                s = s.substr(s.find(c) + 1);
                char d = s[0];
                if (d == '/') {
                    strike = true;
                    break;
                } else if (d >= '1' && d <= '9') {
                    frames[currentFrame] += (d - '0');
                    frames[currentFrame] *= 2;
                    s = s.substr(s.find(d) + 1);
                    continue;
                }
            }
            
            if (!strike) {
                score += frames[currentFrame];
            } else {
                score += 10;
            }
        }
    }
    
    return score;
}

char next(char c, std::string s) {
    int i = s.find(c);
    return s[i + 1];
}