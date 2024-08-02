int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') {
            string firstHalf = s.substr(0, i);
            string secondHalf = s.substr(i + 1);
            int firstHalfScore = 0;
            int j = 0;
            for (; j < firstHalf.length(); j++) {
                if (firstHalf[j] != 'X') {
                    firstHalfScore += (firstHalf[j] - '0');
                } else {
                    firstHalfScore += 10;
                    break;
                }
            }
            if (j == firstHalf.length()) {
                firstHalfScore = 10;
            }
            int secondHalfScore = 0;
            j = 0;
            for (; j < secondHalf.length(); j++) {
                if (secondHalf[j] != 'X') {
                    secondHalfScore += (secondHalf[j] - '0');
                } else {
                    secondHalfScore += 10;
                    break;
                }
            }
            if (j == secondHalf.length()) {
                secondHalfScore = 10;
            }
            score += firstHalfScore + secondHalfScore;
        } else {
            int frameScore = 0;
            j = 0;
            for (; j < i; j++) {
                if (s[j] != 'X') {
                    frameScore += (s[j] - '0');
                } else {
                    frameScore += 10;
                    break;
                }
            }
            if (j == i) {
                frameScore = 10;
            }
            score += frameScore;
        }
    }
    return score;
}
#include <string>