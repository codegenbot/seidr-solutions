#include <iostream>
using namespace std;

int score(string s);

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}

int score(string s) {
    int frame = 1, score = 0, i = 0;
    while (frame <= 10) {
        if (s[i] == 'X') {
            score += 10;
            if (s[i+2] == 'X' && (s.size() <= i + 4 || s[i+4] == 'X')) {
                score += 20;
            } else if (s[i+2] == 'X') {
                score += 10 + (s[i+4] == 'X' ? 10 : s[i+4] == '/' ? 10 - (s[i+1] - '0') : s[i+4] - '0');
            } else if (s[i+3] == '/') {
                score += 10;
            } else {
                score += s[i+2] == 'X' ? 10 : s[i+2] == '/' ? 10 - (s[i+1] - '0') : s[i+2] - '0';
                score += s[i+3] == 'X' ? 10 : s[i+3] == '/' ? 10 : s[i+3] - '0';
            }
            i++;
        } else if (s[i+1] == '/') {
            score += 10;
            score += s[i+3] == 'X' ? 10 : s[i+3] - '0';
            i += 2;
        } else {
            score += s[i] == '-' ? 0 : s[i] - '0';
            score += s[i+1] == '-' ? 0 : s[i+1] - '0';
            i += 2;
        }
        frame++;
    }
    return score;
}