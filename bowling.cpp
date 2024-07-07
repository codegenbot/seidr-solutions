#include <string>

int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            if (stoi(s.substr(0, i)) + stoi(s.substr(i+1, i - iopos('/'))) == 10) {
                score += 10;
            } else {
                score += 10 - stoi(s.substr(0, i));
            }
        } else if (isdigit(s[i])) {
            int num = 0;
            for (; isdigit(s[i]); i++) {
                num = num * 10 + (s[i] - '0');
            }
            score += num;
        } else { // X
            score += 10;
            i++;
        }
    }
    return score;