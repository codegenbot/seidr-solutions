#include <string>

int bowlingScore(string s) {
    int score = 0;
    for(int i=0; i<10; i++) {
        if(s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            score += 10 + (i > 0 ? bowlingScoreHelper(&s.substr(i+1)) : 0);
        } else {
            int frame = s[i] - '0';
            if(s[i+1] == 'X') {
                score += 10 + frame;
            } else if (s[i+1] == '/') {
                score += 10 + frame + bowlingScoreHelper(&s.substr(i+2));
            } else {
                score += 10 + frame + s[i+1] - '0';
            }
        }
    }
    return score;
}

int bowlingScoreHelper(string* s) {
    int score = 0;
    for(int i=0; i<2; i++) {
        if(s->at(i) == 'X') {
            score += 30;
            break;
        } else if (s->at(i) == '/') {
            score += 10 + (i > 0 ? s->at(i-1) - '0' : 0);
            break;
        } else {
            int frame = s->at(i) - '0';
            if(i < 1) {
                score += frame;
            } else {
                score += frame + s->at(i-1) - '0';
            }
        }
    }
    return score;
}