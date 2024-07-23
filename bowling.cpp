#include <string>

int bowlingScore(string s) {
    int score = 0;
    vector<int> frameScores;

    for (char c : s) {
        if (c == 'X') {
            score += 10;
            if (!frameScores.empty()) {
                score += *max_element(frameScores.begin(), frameScores.end());
            }
            frameScores.clear();
        } else if (c == '/') {
            int spareRoll1 =stoi(string(1, s[s.find('/')-1]));
            int spareRoll2 = stoi(string(1, s.substr(s.find('/')-2, 1)));
            score += 10 - spareRoll1 - spareRoll2;
            frameScores.clear();
        } else {
            if (c >= '0' && c <= '9') {
                int roll =stoi(string(1, c));
                if (!frameScores.empty()) {
                    frameScores.back() += roll;
                } else {
                    frameScores.push_back(roll);
                }
            }
        }
    }

    if (frameScores.size() > 0) {
        score += accumulate(frameScores.begin(), frameScores.end(), 0);
    }

    return score;