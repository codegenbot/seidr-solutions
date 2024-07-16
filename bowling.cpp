#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int frame = 1;
    for (int i = 0; i <= s.size() - 1; ++i) {
        if (s[i] == 'X') {
            score += 10;
            if (i < s.size() - 1 && (s[i+1] == 'X' || s[i+1] == '/')) {
                frame = 2;
            }
        } else if (s[i] == '/') {
            int firstRoll = s[i-1] - '0';
            int secondRoll = s[i+1] - '0';
            score += max(firstRoll, secondRoll);
            ++frame;
        } else {
            int roll = s[i] - '0';
            score += roll;
            if (i < s.size() - 2 && s[i+1] == 'X' && s[i+2] == 'X') {
                frame = 3;
            }
        }
    }
    return score;
}