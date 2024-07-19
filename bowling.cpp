#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int currentFrame = 1;
    std::vector<int> frames(10);

    for (char c : s) {
        if (c == '/') {
            if (frames[currentFrame - 1] == 10) {
                score += 10;
            } else {
                score += frames[currentFrame - 1];
            }
            currentFrame++;
        }

        if (c >= '0' && c <= '9') {
            int strike = false;
            while (c != '/' && c >= '0' && c <= '9') {
                frames[currentFrame - 1] *= 10 + (c - '0');
                c = next(c, s);
            }

            if (!strike) {
                score += frames[currentFrame - 1];
            } else {
                score += 10;
            }
        }
    }

    return score;
}

char next(char c, std::string s) {
    int i = s.find(c);
    return s[i + 1];
}