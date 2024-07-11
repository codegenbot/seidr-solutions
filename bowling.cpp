#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll1 = 0;
    int roll2 = 0;
    bool firstFrame = true;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '/') {
            if(firstFrame) {
                score += 10;
            } else {
                score += (roll1 + roll2);
            }
            firstFrame = false;
            roll1 = 0;
            roll2 = 0;
        } else if('0' <= s[i] && s[i] <= '9') {
            int value = s[i] - '0';
            if(firstFrame) {
                roll1 = value;
            } else {
                roll2 = value;
            }
        } else if(s[i] == 'X') {
            score += 10;
            if(firstFrame) {
                roll1 = 10;
            } else {
                roll1 + roll2 > 10 ? score += 10 : score += roll1 + roll2;
                firstFrame = false;
                roll1 = 0;
                roll2 = 0;
            }
        }
    }

    if(firstFrame) {
        score += roll1 + roll2;
    } else {
        roll1 + roll2 > 10 ? score += 10 : score += roll1 + roll2;
    }

    return score;
}