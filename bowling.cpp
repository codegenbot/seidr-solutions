#include <string>

int bowlingScore(string str) {
    int score = 0;
    for (char c : str) {
        if (c == '/') {
            if (score % 2 != 0) {
                score += 10 - (str.find('/') - str.find_last_of('0') + 1);
            }
            score++;
        } else if (isdigit(c)) {
            int temp = c - '0';
            while (str[str.find_last_of('0') + 1] == '0' && str.find_last_of('0') < str.size() - 1) {
                temp *= 10;
                str.erase(str.find_last_of('0'), 1);
            }
            score += temp;
        } else {
            score++;
        }
    }
    return score;