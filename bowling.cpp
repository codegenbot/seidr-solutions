#include <string>
int bowlingScore(std::string s) {
    int score = 0;
    int currentFrame = 1;
    std::vector<int> frames(10);
    
    for (char c : s) {
        if (c == '/') {
            currentFrame++;
            continue;
        }
        
        if (c >= '0' && c <= '9') {
            int pinCount = c - '0';
            
            while (pinCount < 3 || s.find('/')) {
                if (s.find('/', s.find('/') + 1)) {
                    pinCount += (s.find('/', s.find('/') + 1) - s.find('/') - 1) - '0' + 1;
                } else {
                    pinCount++;
                }
                
                c = next(c, s);
            }
            
            if (currentFrame == 10 && pinCount < 2) {
                score += 10 + frames[9] * 10;
                return score;
            }
            
            if (pinCount == 1 || (pinCount == 2 && s.find('/') - s.find(c) > 0)) {
                score += 10 + (frames[currentFrame - 1] < 10 ? 10 : 10 + frames[9]);
            } else {
                score += pinCount * 10;
            }
            
            currentFrame++;
        }
    }
    
    return score;
}

char next(char c, std::string s) {
    int i = s.find(c);
    return s[i + 1];
}