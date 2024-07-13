#include <string>

int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    int currentFrame = 1;

    for (char c : s) {
        if (c == '/') {
            if (currentFrame < 10 && (currentRolls < 2 || s[stoi(s.substr(currentFrame*2-1, 1)) - '0'] == 'x')) {
                score += isStrike() ? 30 : isSpare() ? 20 : 10;
            }
            currentRolls = 0;
            currentFrame++;
        } else if (c >= '1' && c <= '9') {
            currentRolls++;
            score += c - '0';
        }
    }

    return score;

}

int isStrike() {
    int count = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '/')
            break;
        count += (s[i]-'0');
    }
    return count >= 10;
}

int isSpare() {
    int count = 0;
    int strikes = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '/')
            break;
        count += (s[i]-'0');
        if(count >= 10) 
            return 1;
    }
    return 0;
}