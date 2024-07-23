#include <string>

int bowlingScore(string str) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (str[i] == '/') {
            string firstPart = str.substr(0, i);
            string secondPart = str.substr(i + 1);
            int firstScore = (firstPart[0] - '0') * 10 + (firstPart.length() > 1 ? (firstPart[1] - '0') : 10);
            int secondScore = (secondPart[0] - '0') * 5;
            score += max(firstScore, secondScore) + min(firstScore, secondScore);
        } else {
            score += (str[i] - '0') * 10;
        }
    }
    return score;