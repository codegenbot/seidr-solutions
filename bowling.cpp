#include <string>

int bowlingScore(string s) {
    int score = 0;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'X') {
            score += 30;
            i++;
        } else if (isdigit(s[i])) {
            int count = 1;
            for (int j = i + 1; j < s.length(); j++) {
                if (isdigit(s[j])) {
                    count++;
                } else {
                    break;
                }
            }
            score += count * (s[i] - '0');
            i += count;
        } else if (s[i] == '/') {
            int firstCount = s[i-1] - '0';
            int secondCount = s[i+1] - '0';
            score += 10 + firstCount + secondCount;
            i += 2;
        }
    }
    return score;
}