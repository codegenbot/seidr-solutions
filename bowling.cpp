#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            score += (s[i - 1] - '0') * 10 + s[i + 1] - '0';
            continue;
        } else {
            int strikeOrSpare = s[i] - '0';
            if (i < 9) {
                char nextChar = s[i + 1];
                if (nextChar == 'X') {
                    score += strikeOrSpare * 10 + 30;
                } else if (nextChar == '/') {
                    score += strikeOrSpare * 10;
                } else {
                    int nextStrikeOrSpare = nextChar - '0';
                    score += strikeOrSpare * 10 + nextStrikeOrSpare;
                }
            } else {
                score += strikeOrSpare * 10;
            }
        }
    }
    return score;
}