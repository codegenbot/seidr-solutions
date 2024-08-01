#include <string>

int bowlingScore(string s) {
    int score = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
        } else if (c == '/') {
            if (s.find("X") != string::npos) {
                score += 10;
            } else {
                score += 10 - (26 - (stoi(s.substr(0, s.find("/"))) * 2));
            }
        } else {
            int pins = c - '0';
            score += pins;
            if (pins < 10) {
                for (int i = 1; i <= 3; i++) {
                    if (s[stoi(s.substr(0, s.find("/")) + string::npos)) == '/') {
                        score += 10 - (26 - (stoi(s.substr(0, s.find("/"))) * 2));
                        break;
                    }
                    else {
                        pins++;
                    }
                }
            }
        }
    }
    return score;
}