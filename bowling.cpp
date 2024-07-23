#include <string>

int bowlingScore(string str) {
    int score = 0;
    int i = 0;
    while (i < str.length()) {
        if (str[i] == '/') {
            string firstPart = str.substr(0, i);
            string secondPart = str.substr(i + 1);
            int firstScore = (firstPart[0] - '0') * 10 + (firstPart[1] - '0');
            int secondScore = (secondPart[0] - '0') * 5;
            score += max(firstScore, secondScore) + min(firstScore, secondScore);
            i++;
        } else {
            if (str[i] == 'x' || str[i] == '/') {
                score += 10 + bowlingScore(secondPart);
                return score;
            }
            int currentFrame = (str[i] - '0') * 10 + (str[i+1] - '0');
            i++;
            if (str[i] != '/') {
                if (str[i] == 'x' || str[i] == '/') {
                    score += 10;
                } else {
                    currentFrame += (str[i] - '0') * 1 + (str[i+1] - '0');
                }
            }
            score += currentFrame;
        }
    }
    return score;
}