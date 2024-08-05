#include <string>
int bowlingScore(std::string s) {
    int score = 0;
    int roll1, roll2, prevRolls = 0;

    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            if (i + 1 < s.length() && isdigit(s[i + 1])) {
                // Two rolls
                int roll = (s[i] - '0') * 10 + (s[i + 1] - '0');
                prevRolls += roll;
                if (prevRolls > 10) {
                    score += 10 + prevRolls - 10;
                    prevRolls = 0;
                }
            } else {
                // One roll
                int roll = s[i] - '0';
                prevRolls += roll;
            }
        } else if (s[i] == '/') {
            // Strike or spare
            score += 10 + prevRolls;
            prevRolls = 0;
        }
    }

    return score;
}