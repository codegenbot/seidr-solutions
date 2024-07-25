#include <string>

int calculateBowlingScore(std::string s) {
    int total = 0, frame = 0, frameScore = 0;
    bool isSpare = false, isStrike = false;

    for (char c : s) {
        if (c == 'X') {
            total += 10 + (isStrike ? 10 : 0) + (isStrike && s.length() > (frame + 2) * 2 ? s[(frame + 2) * 2] - '0' : s[(frame + 1) * 2] - '0');
            isStrike = true;
            frameScore = 0;
            frame++;
        } else if (c == '/') {
            total += 10 - (s[(frame - 1) * 2] - '0') + (s[frame * 2 + 1] - '0');
            if (isStrike) total += 10;
            isSpare = false;
            frameScore = 0;
            frame++;
        } else if (c == '-') {
            frameScore = 0;
            frame++;
        } else {
            frameScore += c - '0';
            if (frameScore == 10) {
                total += 10 + (isStrike && s.length() > (frame + 1) * 2 ? s[(frame + 1) * 2] - '0' : s[(frame + 1) * 2] - '0');
                frameScore = 0;
                frame++;
                isStrike = true;
            } else {
                isStrike = false;
            }
        }
    }

    if (isSpare) total += 10 - (s[(frame - 1) * 2] - '0') + (s.back() - '0');
    total += frameScore;

    return total;
}