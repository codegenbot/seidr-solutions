#include <iostream>
#include <string>

int calculateBowlingScore(std::string s) {
    int total = 0, frame = 0, frameScore = 0;
    bool isSpare = false, isStrike = false;
    char c;

    for (char c : s) {
        if (c == 'X') {
            total += 10 + frameScore;
            if (isStrike) total += 10 + (c - '0') + (s[(frame + 1) * 2] - '0');
            if (isSpare) total += 10 - (s[(frame - 1) * 2] - '0') + (c - '0') - frameScore;
            isStrike = true;
            frameScore = 0;
            frame++;
        } else if (c == '/') {
            total += 10 - (s[(frame - 1) * 2] - '0');
            if (s.size() > frame * 2) {
                total += s[frame * 2] - '0';
            } else {
                total += s[frame * 2 + 1] - '0';
            }
            if (isStrike) total += 10;
            isSpare = false; // Update isSpare flag
            frameScore = 0;
            frame++;
        } else if (c == '-') {
            frameScore = 0;
            frame++;
        } else {
            frameScore += c - '0';
            if (frameScore == 10) {
                total += 10 + (s[(frame + 1) * 2] - '0');
                if (s[(frame + 1) * 2] == 'X') total += 10;
                frameScore = 0;
                frame++;
                isStrike = true;
            } else {
                isStrike = false;
            }
        }
    }

    if (isSpare) total += 10 - (s[(frame - 1) * 2] - '0') + (c - '0') - frameScore;
    total += frameScore;

    return total;
}

int main() {
    std::string input;
    std::cin >> input;
    int score = calculateBowlingScore(input);
    std::cout << score << std::endl;
    return 0;
}