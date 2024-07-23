#include <string>

int bowlingScore(string str) {
    int score = 0;
    int i = 0;
    while (i < str.length()) {
        if (str[i] == '/') {
            string firstPart = str.substr(0, i);
            string secondPart = str.substr(i + 1);
            int firstScore = (firstPart[0] - '0') * 10 + (firstPart[1] - '0');
            if (secondPart.length() > 1) {
                int secondScore = (secondPart[0] - '0') * 10 + (secondPart[1] - '0');
                score += firstScore + secondScore;
            } else {
                score += firstScore + (secondPart[0] - '0') * 10;
            }
            i++;
        } else {
            int roll = (str[i] - '0') * 10;
            if (i < str.length() - 1 && str[i + 1] != '/') {
                roll += (str[i + 1] - '0') * 10;
                score += roll;
                i++;
            } else {
                score += roll;
            }
        }
    }
    return score;