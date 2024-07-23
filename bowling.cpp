#include <string>

int bowlingScore(string str) {
    int score = 0;
    int i = 0;
    while (i < str.length()) {
        if (str[i] == '/') {
            string firstPart = str.substr(0, i);
            string secondPart = str.substr(i + 1);
            if (firstPart[0] != 'X') {
                int firstScore = (firstPart[0] - '0') * 10 + (firstPart[1] - '0');
                int secondScore = (secondPart[0] - '0') * 5;
                score += max(firstScore, secondScore) + min(firstScore, secondScore);
            } else {
                if (i < str.length() - 1) {
                    score += 10 + (str[i + 1] - '0') * 10 + (str[i + 2] - '0') * 10;
                } else {
                    score += 10 + 10 + 10;
                }
            }
        } else if (str[i] == 'X') {
            score += 10 + bowlingScore(secondPart);
        } else {
            int frameScore = (str[i] - '0') * 10 + (str[i + 1] - '0');
            score += frameScore;
            i++;
        }
        i++;
    }
    return score;