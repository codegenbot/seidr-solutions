```c++
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int frame = 1;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + (frame < 10 ? 10 : 0);
            frame++;
        } else if (c == '/') {
            score += 10 - ((s.back() - '0') + (s[s.length()-2] - '0'));
            frame++;
        } else {
            int pins = c - '0';
            score += pins;
            if (frame < 9) {
                if (pins == 10) {
                    score += 10;
                    frame++;
                } else {
                    frame++;
                    if (!((s.length()-1)>s.find('/')) && !((s.length()-2)>s.find('/'))) {
                        int nextPins = s.back() - '0';
                        score += pins + nextPins;
                        frame++;
                    }
                }
            } else {
                score += pins;
            }
        }
    }
    return score;
}