#include <string>
#include <vector>

int bowlingScore(std::string input) {
    int score = 0;
    std::vector<int> frames;

    // Split the input string into individual frames.
    std::string frame;
    for (char c : input) {
        if (c == '/') {
            frames.push_back(0);
            continue;
        }
        frame += c;
    }
    frames.push_back(std::stoi(frame));

    int previous_frame_score = 0;
    for (int frame_score : frames) {
        if (frame_score == 10) {
            score += 10;
        } else {
            score += frame_score + previous_frame_score;
            if (previous_frame_score > 0 && score < 10) {
                score += 10 - score;
            }
        }
        previous_frame_score = frame_score;
    }

    return score;
}