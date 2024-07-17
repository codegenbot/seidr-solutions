#include <string>

int bowlingScore(string s) {
    int score = 0;
    bool spare = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + (i < 9 ? getFrameValue(s, i+1) : 0);
            spare = false;
        } else if (s[i] == '/') {
            int a = s[i-1] - '0';
            int b = s[i+1] - '0';
            score += a + b + (i < 9 ? getFrameValue(s, i+2) : 0);
            spare = true;
        } else {
            int a = s[i] - '0';
            if (!spare) {
                score += a;
            } else {
                score += a;
                spare = false;
            }
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