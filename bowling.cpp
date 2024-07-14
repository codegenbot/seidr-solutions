#include <vector>
using namespace std;

int bowlingScore(string input) {
    int score = 0;
    int rolls = 0;
    vector<int> frames;
    
    for (char c : input) {
        if (c == '/') {
            if (input[rolls] == 'X') {
                score += 10;
                rolls++;
                continue;
            }
            int strikeOrSpare = stoi(input.substr(rolls, 2));
            if (strikeOrSpare >= 10) {
                score += 10;
            } else {
                score += strikeOrSpare;
            }
            rolls += 2;
        } else if (c == 'X') {
            score += 10;
            rolls++;
        } else {
            int frame = c - '0';
            frames.push_back(frame);
            if (frames.size() == 2) {
                int total = frames[0] + frames[1];
                if (total < 10) {
                    score += total;
                } else {
                    score += 10;
                }
                frames.clear();
            }
        }
    }
    
    while (!frames.empty()) {
        int total = 0;
        for (int i = 0; i < 2 && i < frames.size(); i++) {
            total += frames[i];
        }
        if (total < 10) {
            score += total;
        } else {
            score += 10;
        }
        while (!frames.empty()) {
            frames.pop_back();
        }
    }
    
    return score;
}