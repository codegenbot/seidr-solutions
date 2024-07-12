#include <iostream>
#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'X') {
            score += 10;
            if (frame < 10) {
                score += (s[i + 1] == 'X' ? 10 : (s[i + 1] == '/' ? 10 - (s[i + 2] - '0') : s[i + 1] - '0') + (s[i + 2] == '/' ? 10 - (s[i + 3] - '0') : s[i + 2] - '0'));
                ball += 2;
            } else {
                ball += 2;
            }
            frame++;
        } else if (s[i] == '/') {
            score += 10 - (s[i - 1] - '0');
            score += (s[i + 1] == 'X' ? 10 : s[i + 1] - '0');
            ball++;
            frame++;
        } else if (s[i] == '-') {
            ball++;
        } else {
            score += s[i] - '0';
            if (frame < 10) {
                if (ball % 2 == 1 && s[i - 1] != '/') {
                    score += (s[i - 1] == 'X' ? 10 : s[i - 1] - '0');
                }
                ball++;
            }
        }
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << bowlingScore(s) << endl;
    return 0;
}