#include <string>
#include <algorithm>

std::string scoring(const std::string &str) {
    int result = 0;
    for (char c : str) {
        if (c >= '1' && c <= '9') {
            result = result * 10 + (c - '0');
        } else if (c == 'X') {
            result += 10;
        }
    }
    return std::to_string(result);
}

int bowlingScore(const std::string &frames) {
    int score = 0;
    for (int i = 0; i < frames.size(); ++i) {
        if (frames[i] == 'X') { // Strike
            score += 10 + scoring(std::string(frames.begin()+i+1, frames.end()));
        } else if (frames[i] == '/') { // Spare
            int spareValue = 10 - scoring(std::string(frames.begin(), frames.begin()+i)).back();
            score += 10 + spareValue;
            i++;
        } else {
            int currentFrameScore = 0;
            for (int j = i; j < frames.size(); ++j) {
                if (frames[j] == '/') break;
                currentFrameScore *= 10;
                currentFrameScore += scoring(std::string(frames.begin()+i, frames.begin()+j+1)).back() - '0';
            }
            score += currentFrameScore;
        }
    }
    return score;
}