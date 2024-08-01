int bowlingScore(const std::string &frames) {
    int score = 0;
    for (int i = 0; i < frames.size(); ++i) {
        if (frames[i] == 'X') { 
            score += 10 + scoring(&frames.substr(i+1));
        } else if (frames[i] == '/') { 
            int spareValue = 10 - scoring(&frames.substr(0, i)).back();
            score += 10 + spareValue;
            i++;
        } else {
            int currentFrameScore = 0;
            for (int j = i; j < frames.size(); ++j) {
                if (frames[j] == '/') break;
                currentFrameScore *= 10;
                currentFrameScore += scoring(&frames.substr(i, j-i+1)).front() - '0';
            }
            score += currentFrameScore;
        }
    }
    return score;
}

int scoring(const std::string &str) {
    int result = 0;
    for (auto c : str) {
        if (c >= '1' && c <= '9') {
            result = result * 10 + (c - '0');
        } else if (c == 'X') {
            result += 10;
        }
    }
    return result;