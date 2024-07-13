#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    std::stringstream ss(s);
    char c;
    int temp = 0;
    bool spare = false;
    while (ss >> c) {
        if (c == 'X') {
            score += 30;
        } else if (c == '/') {
            score += 10 + temp;
            spare = true;
        } else {
            temp = c - '0';
            if (!spare) {
                score += temp;
            } else {
                score += temp;
                spare = false;
            }
        }
    }
    return score;