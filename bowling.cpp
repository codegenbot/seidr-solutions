#include <string>

int bowlingScore(string str) {
    int score = 0;
    string tempStr;
    for (int i = 0; i < 10; i++) {
        if (str[i] == '/') {
            tempStr = str.substr(0, i);
            score += bowlingFrame(tempStr);
            str = str.substr(i + 1);
        } else {
            int frameScore = (str[i] - '0') * 10;
            if (i < 8 && str[i+1] == '/') {
                frameScore += bowlingFrame(str.substr(i+1,2));
                i++;
            }
            score += frameScore;
        }
    }
    return score;
}

int bowlingFrame(string str) {
    int first = (str[0] - '0') * 10 + (str[1] - '0');
    int second = str[1] == '/' ? 10 : (str[1] - '0') * 5;
    return max(first, second) + min(first, second);
}