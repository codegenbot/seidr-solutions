#include <string>

int bowlingScore(string s) {
    int score = 0;
    
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            string str = s.substr(i, 2);
            int thisFrameScore = stoi(str) * 2;
            if (str[1] == '0')
                thisFrameScore++;
            score += thisFrameScore;
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