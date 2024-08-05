#include <string>

int bowlingScore(string s) {
    int score = 0;
    
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            int nextSlashIndex = s.find('/', i);
            string thisFrameScoreStr = s.substr(i, nextSlashIndex - i);
            int thisFrameScore = stoi(thisFrameScoreStr) * 2;
            if (thisFrameScore == 10) {
                score += 10;
            } else {
                score += thisFrameScore;
            }
        } else {
            int thisFrameScore = 0;
            for (int j = i; j < s.size(); j++) {
                if (s[j] == '/') break;
                thisFrameScore += (s[j] - '0');
            }
            score += thisFrameScore;
        }
    }
    
    return score;
}