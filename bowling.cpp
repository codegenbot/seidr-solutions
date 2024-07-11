#include <iostream>
using namespace std;

int calculateScore(string s) {
    int score = 0;
    int frame = 1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            score += 10;
            if (frame < 10) {
                score += (s[i + 1] == 'X') ? 10 : (isdigit(s[i + 1]) ? s[i + 1] - '0' : 10);
                score += (s[i + 2] == 'X') ? 10 : (isdigit(s[i + 2]) ? s[i + 2] - '0' : 10);
            }
            frame++;
        } else if (s[i] == '/') {
            score += 10 - (s[i - 1] - '0');
            score += (isdigit(s[i + 1]) ? s[i + 1] - '0' : 10);
            if (frame < 10) {
                score += (s[i + 2] == 'X') ? 10 : (isdigit(s[i + 2]) ? s[i + 2] - '0' : 10);
            }
            frame++;
            i++;
        } else if (isdigit(s[i])) {
            score += s[i] - '0';
            frame++;
        }
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << calculateScore(s) << endl;
    return 0;
}