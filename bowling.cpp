#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int currentFrame = 0;
    vector<int> frames(10);

    for (char c : s) {
        if (c == '/') {
            currentFrame++;
            continue;
        }

        if (c >= '1' && c <= '9') {
            int strike = false;
            while (c != '/' && c >= '0' && c <= '9') {
                frames[currentFrame] *= 10 + (c - '0');
                size_t i = s.find(std::string(1, c));
                if(i != string::npos) {
                    c = s[i+1];
                } else {
                    c = '/';
                }
            }

            if (!strike) {
                score += frames[currentFrame];
            } else {
                score += 10;
            }
        }
    }

    return score;
}

char next(char a, char b, std::string s) {
    size_t i = s.find(std::string(1, a));
    return (i != string::npos && (i+1 < s.length())) ? s[i+1] : b;
}