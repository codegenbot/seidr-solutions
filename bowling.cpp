#include <iostream>
#include <string>

int calculateFrameScore(const std::string& s, int index) {
    if (s[index] == 'X') {
        int frameScore = 10;
        int remainingBalls = 2;
        int nextIndex = index + 1;

        while (remainingBalls > 0 && nextIndex < s.size()) {
            if (s[nextIndex] == 'X') {
                frameScore += 10;

                if (nextIndex + 1 < s.size() && s[nextIndex + 1] == 'X') {
                    frameScore += 10;
                } else if (nextIndex + 1 < s.size() && s[nextIndex + 1] == '/') {
                    frameScore += 10 - (s[nextIndex] - '0');
                } else {
                    frameScore += s[nextIndex] - '0';
                }
                remainingBalls--;
            } else if (s[nextIndex] == '/') {
                frameScore += 10 - (s[nextIndex - 1] - '0');
            } else {
                frameScore += s[nextIndex] - '0';
            }

            remainingBalls--;
            nextIndex++;
        }

        return frameScore;
    } else if (s[index] == '/') {
        return 10 - (s[index - 1] - '0') + (s[index + 1] == 'X' ? 10 : s[index + 1] - '0');
    } else {
        return s[index] - '0';
    }
}