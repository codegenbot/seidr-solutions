#include <string>

int bowlingScore(string str) {
    int score = 0;
    int i = 0;
    while (i < 10) {
        if (str[i] == '/') {
            string firstPart = str.substr(0, i);
            string secondPart = str.substr(i + 1);
            int firstScore = (firstPart[0] - '0') * 10 + (firstPart.length() > 1 ? (firstPart[1] - '0') : 10);
            int secondScore = (secondPart[0] - '0') * 5;
            score += max(firstScore, secondScore) + min(firstScore, secondScore);
            i++;
        } else {
            int frameScore = (str[i] - '0') * 10;
            if (i < 8 && str[i+1] != '/') {
                frameScore += (str[i+1] - '0') * 10;
                i++;
            }
            score += frameScore;
        }
        i++;
    }
    return score;