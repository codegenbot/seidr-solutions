```cpp
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '/') {
            if(roll < 2) {
                score += 10 - (10 - (s[i-1] - '0')) - (10 - (s[i-2] - '0'));
            } else {
                score += 10;
            }
            roll = 0;
        } else if('0' <= s[i] && s[i] <= '9') {
            roll = roll * 10 + (s[i] - '0');
        } else if(s[i] == 'X') {
            score += 30;
            roll = 0;
        }
    }
    return score;
}