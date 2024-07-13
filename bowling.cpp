using namespace std;

int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            score += 10 + (i > 0 ? bowlingScoreHelper(s.substr(i, s.length() - i)) : 10);
        } else if (s[i] == ' ') {
            int prevRoll = s[i - 1] - '0';
            int currentRoll = s[i + 1] - '0';
            score += prevRoll + currentRoll;
        } else {
            int roll = s[i] - '0';
            score += roll;
        }
    }
    return score;
}

int bowlingScoreHelper(string s) {
    int score = 0;
    int currentRoll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentRoll = 0;
        } else if (c == '/') {
            score += currentRoll + 10;
            currentRoll = 0;
        } else {
            currentRoll *= 10;
            currentRoll += c - '0';
        }
    }
    return score;

#include <string>