#include <string>

int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            string temp = s.substr(i, 2);
            int left = temp[0] - '0';
            int right = temp[1] - '0';
            score += left + right;
            i++;
        } else {
            int count = s[i] - '0';
            for (int j = 0; j < count; j++) {
                if (i == 9) {
                    score += 10;
                } else if (s[i+1] == 'X') {
                    score += 10 + 10;
                    break;
                } else if (s[i+1] == '/') {
                    string temp = s.substr(i+2, 2);
                    int left = temp[0] - '0';
                    int right = temp[1] - '0';
                    score += 10 + left + right;
                    i++;
                    break;
                }
            }
        }
    }
    return score;
}