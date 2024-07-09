#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int frame = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            score += 10 - (stoi(c + c) / 2);
            frame++;
        } else {
            int pins = stoi(c + c);
            if (frame < 9 && pins < 10) {
                score += pins;
                frame++;
            } else {
                score += pins;
                while (c == 'X' || c == '/') {
                    c = s.back();
                    s.pop_back();
                }
                int bonus = stoi(c + c);
                if (bonus > 10) {
                    score += 10;
                } else {
                    score += bonus;
                }
            }
        }
    }
    return score;
}