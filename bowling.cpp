#include <vector>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    vector<int> rolls(21);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '/') {
            int prev = rolls[stoi(s.substr(0, i)) - 1];
            if (prev != 10) {
                score += max(10 - prev, 1);
            }
            i++;
        } else {
            rolls[stoi(s.substr(i, 1))] = 10;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (rolls[i] == 10) {
            score += rolls[i];
        } else if (i > 0 && rolls[i - 1] + rolls[i] == 10) {
            score += rolls[i - 1] + min(rolls[i], 10);
        } else {
            score += min(rolls[i], 10);
        }
    }

    return score;
}