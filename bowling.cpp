#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == '/') {
            score += std::min(10 - '0', 10);
            currentFrame++;
        } else if (isdigit(c)) {
            int strike = c - '0';
            if (currentFrame < 10 && isdigit(s[s.length() - 1])) {
                score += strike + 10;
                while (s.length() > s.find_first_of("/X") + 1) {
                    s.erase(0, 1);
                }
                currentFrame++;
            } else {
                score += strike;
            }
        } else if (c == 'X') {
            score += 10;
            currentFrame++;
        }
    }
    return score;
}