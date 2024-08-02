#include <vector>
#include <string>

int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '/') {
            if (currentFrame <= 9) {
                if (i + 2 <= s.length() && to_string(currentFrame).c_str()[0] == s[i]) {
                    score += 10;
                    currentFrame++;
                } else {
                    int frameScore = (s[i] - '0') * 10;
                    score += frameScore;
                    i++; // increment i to consider the second roll
                    if (i + 1 <= s.length()) {
                        frameScore += (s[i] - '0');
                        if (i + 2 <= s.length() && to_string(currentFrame).c_str()[0] == s[i+1]) {
                            score += frameScore;
                        } else {
                            score += frameScore;
                            currentFrame++;
                        }
                    } else {
                        score += frameScore;
                    }
                }
            }
        }
    }
    return score;
}