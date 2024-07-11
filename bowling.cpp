```cpp
#include <string>

int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (char c : s) {
        if (c == '/') {
            score += min(10 - '0', 10);
            currentFrame++;
        } else if (isdigit(c)) {
            int strikeOrSpare = 0;
            while (currentFrame < 2 || isdigit(s[s.length() - 1])) {
                if (c == 'X') {
                    score += 10;
                    strikeOrSpare = 2;
                    break;
                } else {
                    score += c - '0';
                    if (isdigit(s[s.length() - 1])) {
                        int nextRoll = s.back() - '0';
                        s.pop_back();
                        if (c + nextRoll > 10) {
                            score += 10;
                        } else {
                            score += c - '0' + nextRoll;
                        }
                        currentFrame++;
                    } else {
                        break;
                    }
                }
            }
            while (strikeOrSpare--) {
                currentFrame++;
                if (s.empty() || s.back() == '/') {
                    break;
                } else if (isdigit(s.back())) {
                    score += s.back() - '0';
                    s.pop_back();
                    if (!s.empty() && isdigit(s.back())) {
                        int nextRoll = s.back() - '0';
                        s.pop_back();
                        if (score + nextRoll > 10) {
                            score += 10;
                        } else {
                            score += nextRoll;
                        }
                    }
                } else {
                    break;
                }
            }
        } else if (c == 'X') {
            score += 10;
            currentFrame++;
        }
    }
    return score;
}