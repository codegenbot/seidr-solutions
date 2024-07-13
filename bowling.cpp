#include <string>
#include <cctype>

int bowlingScore(std::string s) {
    int score = 0;
    std::string frame;
    int i = 0; 
    for (char c : s) {
        if (c == '/') {
            frame += '/';
        }
        frame += c;
        if (c == 'X') {
            score += 10;
        } else if (c == '-') {
            score += 10 - (frame.length() - 1);
        } else if (isdigit(c)) {
            int points = 0;
            i = s.find(c) + 1; 
            for (; isdigit(s[i]); i++) {
                points = points * 10 + (s[i] - '0');
            }
            score += points;
        } else if (c == 'T') {
            i = 0;
            score += 10 + (s[i+1] - '0' + s[i+2] - '0');
        }
    }
    return score;
}

int main() {
    return bowlingScore("X/XXX/X-4-8/2X6/T50");
}