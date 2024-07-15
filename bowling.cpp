#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'X') {
            score += 30;
            i++;
        } else if (s[i] == '/') {
            int strikeOrSpare = std::stoi(s.substr(i + 1, 2)) - 10;
            score += strikeOrSpare;
            i += 3;
        } else {
            int strikeOrSpare = s[i] - '0';
            if (s[i + 1] == 'X') {
                score += strikeOrSpare * 10 + 30;
                i += 2;
            } else if (s[i + 1] == '/') {
                score += strikeOrSpare * 10;
                i += 2;
            } else {
                int nextStrikeOrSpare = s[i + 1] - '0';
                score += strikeOrSpare * 10 + nextStrikeOrSpare;
                i += 2;
            }
        }
    }
    return score;