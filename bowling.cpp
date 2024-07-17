```cpp
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (i < 9 ? getFrameValue(s, i+1) : 0);
        } else if (s[i] == '/') {
            int a = s[i-1] - '0';
            int b = s[i+1] - '0';
            score += a + b;
            if (i < 9) {
                score += getFrameValue(s, i+2);
            }
        } else {
            int a = s[i] - '0';
            if (s[i+1] == 'X') {
                score += 10 + getFrameValue(s, i+2);
            } else if (s[i+1] == '/') {
                score += a + getFrameValue(s, i+2);
            } else {
                score += a;
            }
        }
    }
    return score;
}

int getFrameValue(std::string s, int i) {
    while (s[i] != 'X' && s[i] != '/') {
        i++;
    }
    if (i < s.length() && s[i] == '/') {
        return 10 - (s[i-1] - '0') - (s[i+1] - '0');
    } else {
        return 10;
    }
}