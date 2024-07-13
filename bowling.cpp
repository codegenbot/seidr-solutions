#include <string>

int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') {
            string firstPart = s.substr(0, i);
            string secondPart = s.substr(i + 1);
            int firstScore = 0;
            int j = 0;
            while (j < firstPart.length()) {
                if (firstPart[j] != 'X') {
                    firstScore += (firstPart[j] - '0');
                } else {
                    firstScore += 10;
                    break;
                }
                j++;
            }
            if (!firstPart.empty() && firstPart.back() == 'X') {
                firstScore += 10;
            }
            int secondScore = 0;
            j = 0;
            while (j < secondPart.length()) {
                if (secondPart[j] != 'X') {
                    secondScore += (secondPart[j] - '0');
                } else {
                    secondScore += 10;
                    break;
                }
                j++;
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