```cpp
#include <string>

int getBonus(int a, int b) {
    if(a + b == 10) {
        return 10;
    } else {
        return a + b;
    }
}

int bowlingScore(std::string s) {
    int score = 0;
    int currentFrame = 1;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'X') {
            score += 10;
            if(i+1 < s.length() && (s[i+1] == '/' || s[i+1] == 'X')) {
                currentFrame++;
            }
        } else if(s[i] == '/') {
            int firstRoll = (s[i-1] - '0');
            score += getBonus(firstRoll, 10);
            currentFrame++;
        } else {
            int roll = s[i] - '0';
            score += roll;
            if(i+1 < s.length() && s[i+1] != '/') {
                if(currentFrame == 9) {
                    score += getBonus(roll, (s[i+1] - '0'));
                } else {
                    score += getBonus(roll, (s[i+1] - '0'));
                    currentFrame++;
                }
            } else {
                break;
            }
        }
    }
    return score;
}