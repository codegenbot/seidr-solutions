#include <vector>
#include <iostream>
#include <string>

int bowlingScore(const std::string& frames) {
    int score = 0;
    int currentFrameScore = 0;

    for (char frame : frames) {
        if (frame == 'X') { // strike
            currentFrameScore += 10 + getBonusForNextTwoFrames(frames);
        } else if (frame == '/') { // spare
            currentFrameScore += 10 - getBonusForCurrentFrame(frames);
        } else { // normal frame
            int framePoints = frame - '0';
            currentFrameScore += framePoints;
        }
        score += currentFrameScore;
        currentFrameScore = 0;
    }

    return score;
}

int getBonusForNextTwoFrames(const std::string& frames) {
    int bonus = 0;

    for (char c : frames.substr(1)) {
        if (c == 'X') {
            bonus += 10;
        } else if (c == '/') {
            int points = 10 - getBonusForCurrentFrame(frames.substr(2));
            bonus += points > 0 ? points : 0;
        } else {
            bonus += c - '0';
        }
    }

    return bonus;
}

int getBonusForCurrentFrame(const std::string& frames) {
    int currentFrame = 1;

    for (char c : frames) {
        if (c == '/') {
            return currentFrame * 10 - '0';
        } else if (c == 'X') {
            return 10;
        }
        currentFrame++;
    }

    return 0;
}

int main() {
    std::string frame;
    // Read input from user
    std::cout << "Enter the frames: ";
    std::getline(std::cin, frame);

    int score = bowlingScore(frame);
    std::cout << "The score is: " << score << "\n";
    return 0;
}