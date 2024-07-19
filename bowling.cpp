#include <string>
#include <vector>

int bowlingScore(std::string s) {
    int score = 0;
    int currentFrame = 0;
    std::vector<int> frames(10);

    for (char c : s) {
        if (c == '/') {
            currentFrame++;
            continue;
        }

        if (c >= '1' && c <= '9') {
            bool strike = false;
            while (c != '/' && c >= '0' && c <= '9') {
                frames[currentFrame] += c - '0';
                for (char d : s.substr(s.find(c) + 1)) {
                    if (d >= '0' && d <= '9') {
                        frames[currentFrame] *= 10;
                        frames[currentFrame] += d - '0';
                    } else {
                        break;
                    }
                }
                c = s.find('/', s.find(c) + 1);
            }

            strike = frames[currentFrame] == 10;
            if (!strike) {
                score += frames[currentFrame];
            } else {
                score += 10;
            }

            if (frames[currentFrame] < 10 && currentFrame < 9) {
                bool spare = false;
                for (char d : s.substr(s.find('/') + 1)) {
                    if (d >= '0' && d <= '9') {
                        frames[currentFrame + 1] += d - '0';
                    } else {
                        break;
                    }
                }

                while (frames[currentFrame] < 10) {
                    for (char d : s.substr(s.find('/') + 1)) {
                        if (d >= '0' && d <= '9') {
                            frames[currentFrame + 1] += d - '0';
                        } else {
                            break;
                        }
                    }

                    strike = frames[currentFrame] == 10;
                }
            }
        }
    }

    return score;
}