#include <string>

int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') {
            string first = s.substr(0, i);
            string second = s.substr(i + 1);
            int firstPart = 0;
            if (first[0] != 'X') {
                for (char c : first) {
                    firstPart += c - '0';
                }
            } else {
                firstPart = 10;
            }
            int secondPart = 0;
            if (second[0] != 'X') {
                for (char c : second) {
                    secondPart += c - '0';
                }
            } else {
                secondPart = 10;
            }
            score += getScore(firstPart, secondPart);
        } else {
            int frame = 0;
            if (s[i] == 'X') {
                frame = 10;
            } else if (s[i] - '0' + s[i+1] - '0' > 10) {
                frame = 10;
                i++;
            } else {
                frame = s[i] - '0' + s[i+1] - '0';
                i++;
            }
            score += frame;
        }
    }
    return score;
}

int getScore(int first, int second) {
    if (first + second > 10) {
        return 10 + second;
    } else {
        return first + second;
    }
}