#include <string>

int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '/') {
            if (i > 1 && s[i-2] == 'X') {
                score += 10 + stoi(s.substr(i+1, s.find('/', i) - i - 1));
            } else {
                score += 10 - stoi(s.substr(0, i));
            }
        } else if (isdigit(s[i])) {
            int roll = stoi(s.substr(i, s.find('/', i) == string::npos ? string::npos : s.find('/', i) - i));
            if (i < s.size() - 1 && s[i+1] == '/') {
                score += roll;
            } else {
                score += roll;
            }
        } else { // X
            score += 10;
            i++; // skip the 'X' and the '/' that follows it
        }
    }
    return score;
}