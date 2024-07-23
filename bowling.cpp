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
                score += max(firstScore, secondScore) + min(firstScore, secondScore);
            } else {
                score += firstScore + (secondPart[0] - '0') * 10;
            }
            i++;
        } else {
            int frameScore = (str[i] - '0') * 10;
            if (i < str.length() - 1 && str[i+1] != '/') {
                frameScore += (str[i+1] - '0') * 10;
            }
            score += frameScore;
            i++;
        }
    }
    return score;