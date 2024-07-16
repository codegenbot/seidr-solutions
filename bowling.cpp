#include <string>

int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (int i = 0; i <= s.size(); ++i) {
        if (s[i] == 'X') {
            score += 10;
            if (frame < 10) {
                score += bowlingScoreHelper(&s[i+1]);
            }
        } else if (s[i] == '/') {
            int firstRoll = s[i-1] - '0';
            int secondRoll = s[i+1] - '0';
            score += max(firstRoll, secondRoll);
            frame++;
        } else {
            int roll = s[i] - '0';
            if (frame < 10) {
                score += roll;
                if (s[i+1] == '/') {
                    i++;
                } else if (i < s.size() && s[i+1] != 'X') {
                    score += bowlingScoreHelper(&s[i+1]);
                    frame++;
                }
            } else {
                score += roll;
            }
        }
    }
    return score;
}

int bowlingScoreHelper(string *s) {
    int score = 0;
    for (int i = 0; i < s->size(); ++i) {
        if ((*s)[i] == 'X') {
            score += 10;
            if (i < s->size() - 1 && (*s)[i+1] == '/') {
                score += max((*s)[i-1] - '0', (*s)[i+2] - '0');
            }
        } else if ((*s)[i] == '/') {
            int firstRoll = (*s)[i-1] - '0';
            int secondRoll = (*s)[i+1] - '0';
            score += max(firstRoll, secondRoll);
        } else {
            int roll = (*s)[i] - '0';
            score += roll;
        }
    }
    return score;
}