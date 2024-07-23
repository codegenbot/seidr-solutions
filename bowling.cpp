#include <string>

using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'X') {
            score += 30;
            i++;
        } else if (isdigit(s[i])) {
            int pins = s[i] - '0';
            i++;
            if (s[i] == '/') {
                i++; // skip '/'
                while (i < s.length() && !isdigit(s[i])) {
                    i++;
                }
                pins += s[i] - '0';
            } else {
                if (i + 1 < s.length()) {
                    char next = s[i + 1];
                    if (next == '/') {
                        score += 10 - pins;
                        i++; // skip '/'
                        while (i < s.length() && !isdigit(s[i])) {
                            i++;
                        }
                        pins += s[i] - '0';
                        i++; // skip remaining characters
                    } else {
                        score += pins + next - '0';
                        i++; // skip second digit
                    }
                } else {
                    score += pins;
                }
            }
        } else if (s[i] == '/') {
            while (i < s.length() && !isdigit(s[i])) {
                i++;
            }
            int j = i + 1;
            while (j < s.length() && isdigit(s[j])) {
                j++;
            }
            score += 10 - (j - i) - (s[j - 1] - '0');
        }
        i++;
    }
    return score;