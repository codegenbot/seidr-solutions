#include <string>
#include <cctype>

int bowlingScore(const std::string& frames) {
    int score = 0;
    for (char c : frames) {
        if (c == 'X') {
            score += 30;
        } else if (c == '/') {
            score += (10 - (frames.find('/') - 1));
        } else if (std::isdigit(c)) {
            int roll = c - '0';
            if (c != frames[frames.size() - 1]) {
                score += 1 * roll;
            }
            if (frames.find('/') == std::string::npos) {
                for (int i = 0; i < 2 && i < frames.size() - frames.find(c); i++) {
                    if (frames[frames.size() - 1 - i] != 'X' && frames[frames.size() - 1 - i] == '/') {
                        score += roll;
                        break;
                    }
                    else if (i < 1) {
                        score += roll + (10 - roll);
                    }
                }
            }    
        }
    }
    return score;
}