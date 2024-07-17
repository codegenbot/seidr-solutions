#include <string>

int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (i >= 9 ? 0 : getFrameValue(s, i+1));
        } else if (s[i] == '/') {
            int a = s[i-1] - '0';
            int b = s[i+1] - '0';
            score += a + b;
            if (i < 8) score += getFrameValue(s, i+2);
        } else {
            int a = s[i] - '0';
            score += a;
            if (i == 6 || (i < 8 && s[i+1] != 'X' && s[i+1] != '/')) score += getFrameValue(s, i+1);
        }
    }
    return score;
}

int getFrameValue(string s, int i) {
    while (s[i] != 'X' && s[i] != '/') {
        i++;
    }
    if (i < s.length() && s[i] == '/') {
        return 10 - (s[i-1] - '0') - (s[i+1] - '0');
    } else {
        return 10;
    }
}