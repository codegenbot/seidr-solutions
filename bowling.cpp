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
                score += max(firstScore, 10) + min(firstScore, 10);
                if (firstScore == 10) {
                    score += bowlingScore(secondPart.substr(2));
                } else {
                    score += bowlingScore(secondPart);
                }
            } else {
                int secondScore = (secondPart[0] - '0') * 10;
                score += max(firstScore, 10) + min(firstScore, 10) + secondScore;
            }
            i++;
        } else {
            if (i < str.length() - 1 && str[i+1] == '/') {
                int frame = (str[i] - '0') * 10 + (str[i+1] - '0');
                score += max(frame, 10) + min(frame, 10);
                i+=2;
            } else {
                int frame = (str[i] - '0') * 10;
                score += frame;
                i++;
            }
        }
    }
    return score;
}