#include <vector>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + 10;
            frame++;
        } else if (c == '/') {
            score += 10;
            frame++;
        } else if (isdigit(c)) {
            int strikeOrSpare = 0;
            for (int i = 0; i < 2; i++) {
                c = c - '0';
                if (c > 0) {
                    strikeOrSpare += c;
                }
                if (i == 1 && c != 'X') {
                    break;
                }
            }
            score += strikeOrSpare;
            frame++;
        }
    }
    return score;
}