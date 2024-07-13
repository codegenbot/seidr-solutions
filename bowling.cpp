#include <string>

int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') {
            string firstPart = s.substr(0, i);
            string secondPart = s.substr(i + 1);
            int firstScore = 0;
            if (firstPart == "X") {
                firstScore = 10;
            } else if (firstPart.size() > 1) {
                firstScore = 10 - (10 - (firstPart[0] - '0') * 2);
            } else {
                firstScore = firstPart[0] - '0';
            }
            int secondScore = 0;
            if (secondPart == "X") {
                secondScore = 10;
            } else if (secondPart.size() > 1) {
                secondScore = 10 - (10 - (secondPart[0] - '0') * 2);
            } else {
                secondScore = secondPart[0] - '0';
            }
            score += firstScore + secondScore;
        } else {
            if (s[i] == 'X') {
                score += 10;
            } else {
                score += (s[i] - '0') * 2;
            }
        }
    }
    return score;