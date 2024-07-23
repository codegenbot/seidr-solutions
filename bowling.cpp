#include <string>

int bowlingScore(string str) {
    int score = 0;
    string tempStr;
    for (int i = 0; i < 10; i++) {
        if (str[i] == '/') {
            tempStr += str[i];
            if (tempStr.length() > 1) {
                score += 10 + (stoi(tempStr.substr(0, 2)) - 10);
            } else {
                score += 10;
            }
            tempStr = "";
        } else if (isdigit(str[i])) {
            tempStr += str[i];
        }
        if (tempStr.length() == 1) {
            score += stoi(tempStr);
            tempStr = "";
        }
    }
    return score;
}