```
#include <vector>
#include <string>

int bowlingScore(string s) {
    int score = 0;
    vector<int> rolls(21);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            rolls[i / 2] = 10;
            if (i % 2 != 0) {
                score += 10;
            }
        } else if (s[i] == '/') {
            int next = i + 1;
            while (next < s.size() && !isdigit(s[next])) {
                next++;
            }
            int roll = 10 - stoi(string(1, s[i + 1]) + string(1, s[next]));
            rolls[i / 2] = roll;
            score += roll;
        } else {
            int roll = 0;
            while (i < s.size() && isdigit(s[i])) {
                roll = roll * 10 + stoi(string(1, s[i]));
                i++;
            }
            if (i > 0) {
                score += roll;
            }
            rolls[i / 2] = roll;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (rolls[i] == 10) {
            if (i + 1 < 10 && rolls[i + 1] != 0) {
                score += rolls[i + 1];
            }
        } else if (rolls[i] > 0) {
            score += min(rolls[i], 10);
        }
    }

    return score;
}