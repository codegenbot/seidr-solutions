#include <vector>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2, frameNumber = 1;
    while (frameNumber <= 10) {
        if (s[0] == 'X') {
            // Strike
            score += 10 + strikeBonus(s.substr(1));
            s.erase(0, 1);
        } else if (isdigit(s[0])) {
            int pins = (s[0] - '0') * 10 + (s[1] - '0');
            if (s[2] == '/') {
                // Spare
                score += 10 + spareBonus(pins, s.substr(3));
                s.erase(0, 3);
            } else {
                roll1 = pins;
                if (s[2] != 'X') {
                    roll2 = (s[2] - '0') * 10 + (s[3] - '0');
                    score += roll1 + roll2;
                    s.erase(0, 4);
                } else {
                    // Next frame is a strike
                    score += roll1 + strikeBonus(s.substr(3));
                    s.erase(0, 3);
                    frameNumber++;
                }
            }
        }
        frameNumber++;
    }
    return score;
}

int strikeBonus(string s) {
    if (s.length() < 2) {
        return 10;
    } else {
        int firstRoll = (s[0] - '0') * 10 + (s[1] - '0');
        return 10 + firstRoll;
    }
}

int spareBonus(int pins, string s) {
    if (s.length() < 2) {
        return 10 - pins;
    } else {
        int nextRoll = (s[0] - '0') * 10 + (s[1] - '0');
        return 10 - pins + nextRoll;
    }
}