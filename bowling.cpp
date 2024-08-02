#include <sstream>

int bowlingScore(string s) {
    int score = 0;
    int rolls = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 30;
            rolls++;
        } else if (isdigit(s[i])) {
            int frameScore = 10 - (s[i] - '0');
            
            if (i + 1 < s.length() && s[i + 1] == '/') {
                frameScore = 10 - (s[i] - '0') / 2;
                i++;
            }
            
            score += frameScore;
            rolls++;
        } else if (s[i] == '/') {
            int nextRoll = 0;
            i++;
            while (i < s.length() && !isdigit(s[i])) {
                if (s[i] == 'X') {
                    nextRoll += 10;
                    break;
                }
                int nextFrameScore = 10 - (s[i] - '0');
                nextRoll += nextFrameScore;
                i++;
            }
            score += frameScore + nextRoll;
        }
        
        if (rolls >= 10) break;
    }
    
    return score;
}