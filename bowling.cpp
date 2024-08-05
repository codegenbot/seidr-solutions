#include <string>

int bowlingScore(string s) {
    int score = 0;
    bool lastRoll = false;

    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
            lastRoll = true;
        } else if (s[i] == '/') {
            int nextCharIndex = s.find('/', i);
            int thisFrameScore = (nextCharIndex != string::npos) ? stoi(s.substr(i, nextCharIndex - i)) * 2 : 10;
            score += thisFrameScore;
            lastRoll = true;
        } else {
            int thisFrameScore = 0;
            for (int j = i; s[j] != '/' && j < s.size(); j++) {
                thisFrameScore = thisFrameScore * 10 + (s[j] - '0');
            }
            score += thisFrameScore;
            lastRoll = false;
        }

        if (!lastRoll) continue;

        if (i != 9 && s[i+1] == 'X') {
            score += 10;
            i++;
        } else if (s[i+1] == '/') {
            int nextCharIndex = s.find('/', i + 1);
            int thisFrameScore = (nextCharIndex != string::npos) ? stoi(s.substr(i + 1, nextCharIndex - i - 1)) : 10;
            score += thisFrameScore;
        }
    }

    return score;
}