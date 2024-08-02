#include <string>

int bowlingScore(string bowls) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (isdigit(bowls[i])) {
            int roll1 = bowls[i] - '0';
            int roll2 = 0;
            if (i < 9) {
                if (isdigit(bowls[i + 1])) {
                    roll2 = bowls[i + 1] - '0';
                    i++;
                } else {
                    roll2 = 10 - roll1;
                }
            } else {
                roll2 = 10 - roll1;
            }
            score += roll1 + roll2;
        } else {
            if (bowls[i] == 'X') {
                score += 10;
                i++;
                if (i < 9) {
                    if (isdigit(bowls[i])) {
                        int x = bowls[i] - '0';
                        score += x;
                    } else {
                        score += 10;
                    }
                } else {
                    score += 10;
                }
            } else {
                string temp = "";
                for (; i < 10; i++) {
                    if (bowls[i] == '/') break;
                    temp += bowls[i];
                }
                int x = std::stoi(temp) + roll1;
                score += x;
            }
        }
    }
    return score;
}