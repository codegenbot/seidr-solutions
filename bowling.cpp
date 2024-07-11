#include <string>

int bowlingScore(string s) {
    int score = 0;
    string temp;
    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') {
            temp = s.substr(0, i);
            s.erase(0, i + 1);
        } else {
            temp += s[i];
            s.erase(0, 1);
        }
        int firstRoll = stoi(temp);
        if (firstRoll == 10) {
            score += 10;
        } else {
            if (s.length() >= 2 && (stoi(s.substr(0, 2)) == firstRoll + 10)) {
                s.erase(0, 2);
                score += firstRoll + 10;
            } else {
                int secondRoll = stoi(s);
                if (firstRoll + secondRoll > 10) {
                    score += 10;
                } else {
                    score += firstRoll + secondRoll;
                }
            }
        }
    }
    return score;
}