#include <string>

int bowlingScore(string s) {
    int score = 0;
    string previousFrame = "";
    for (char c : s) {
        if (c == '/') {
            string frame = s.substr(0, s.find('/'));
            if (frame[0] == 'X') {
                score += 10 + stoi(previousFrame);
            } else if (stoi(frame) < 10) {
                score += 10;
            } else {
                score += stoi(frame);
            }
            previousFrame = "";
        } else if (isdigit(c)) {
            previousFrame += c;
        } else { // X
            string frame = s.substr(0, s.find('X'));
            if (frame[0] == 'X') {
                score += 10 + stoi(previousFrame);
            } else {
                score += 10 + stoi(frame) + stoi(previousFrame);
            }
            previousFrame = "";
        }
    }
    return score;
}