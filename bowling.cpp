#include <string>

int bowlingScore(string str) {
    int score = 0;
    int i = 0;
    while (i < str.length()) {
        if (str[i] == '/') {
            string firstPart = str.substr(0, i);
            string secondPart = str.substr(i + 1);
            int firstScore = (firstPart[0] - '0') * 10 + (firstPart.length() > 1 ? (firstPart[1] - '0') : 0);
            if (secondPart.length() >= 2) {
                int secondScore = (secondPart[0] - '0') * 10 + (secondPart[1] - '0');
                score += max(firstScore, secondScore) + min(firstScore, secondScore);
            } else {
                score += firstScore;
            }
            i++;
        } else {
            if (i < str.length() - 1 && str[i+1] == '/') {
                int currentScore = (str[i] - '0') * 10;
                score += currentScore;
                i++;
            } else {
                int currentScore = (str[i] - '0') * 10 + (i < str.length() - 1 && str[i+1] == '/' ? 10 : 0);
                score += currentScore;
                i++;
            }
        }
    }
    return score;
}