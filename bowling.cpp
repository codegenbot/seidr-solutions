#include <string>

int bowlingScore(string s) {
    int score = 0;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'X') {
            score += 30;
            i++;
        } else if (s[i] == '/') {
            int nextSpace = s.find('/', i);
            int firstRoll = s[nextSpace - 1] - '0';
            int secondRoll = s[nextSpace + 1] - '0';
            score += firstRoll + secondRoll;
            i = nextSpace + 2;
        } else {
            int rolls = 0;
            while (i < s.length() && s[i] != '/') {
                rolls = rolls * 10 + (s[i] - '0');
                i++;
            }
            score += rolls;
        }
    }
    return score;