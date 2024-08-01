```cpp
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int i = 0;
    while(i < s.length()) {
        if(s[i] == 'X') {
            score += 30;
            i++;
        } else if (s[i] == '/') {
            score += 10 + bowlingScoreHelper(&s.substr(i+1));
            i+=3;
        } else {
            int frame = s[i] - '0';
            if(s[i+1] == 'X') {
                score += 10 + frame;
                i+=2;
            } else if (s[i+1] == '/') {
                score += 10 + frame + bowlingScoreHelper(&s.substr(i+2));
                i+=3;
            } else {
                score += 10 + frame + s[i+1] - '0';
                i+=2;
            }
        }
    }
    return score;
}

int bowlingScoreHelper(std::string* s) {
    int score = 0;
    for(int i=0; i<2 && i < s->length(); i++) {
        if(s->at(i) == 'X') {
            score += 30;
            break;
        } else if (s->at(i) == '/') {
            score += 10 + (i > 0 ? (*s)[i-1] - '0' : 0);
            break;
        } else {
            int frame = (*s)[i] - '0';
            if(i < 1) {
                score += frame;
            } else {
                score += frame + (*s)[i-1] - '0';
            }
        }
    }
    return score;
}