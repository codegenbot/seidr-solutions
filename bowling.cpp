#include <string>

using namespace std;

int bowlingScore(string s) {
    int score = 0, frame = 1, bowl = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                score += (s[bowl + 1] == 'X') ? 10 : (s[bowl + 1] - '0');
                score += (s[bowl + 2] == 'X') ? 10 : (s[bowl + 2] == '/' ? 10 - (s[bowl + 1] - '0') : (s[bowl + 2] - '0'));
            }
            frame++;
            bowl++;
        } else if (c == '/') {
            score += 10 - (s[bowl - 1] - '0');
            score += (s[bowl + 1] == 'X') ? 10 : (s[bowl + 1] - '0');
            frame++;
            bowl += 2;
        } else if (c != '-') {
            score += c - '0';
            if (frame < 10 && s[bowl + 1] == '/') {
                score += 10 - (c - '0');
            }
            frame++;
            bowl++;
        }
    }
    return score;
}