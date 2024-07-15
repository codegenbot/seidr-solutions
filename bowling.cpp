#include <iostream>
#include <vector>

int score(const string& s) {
    int total = 0;
    int frame = 1;
    int ball = 0;
    vector<int> scores(21, 0);
    for (char c : s) {
        if (c == 'X') {
            scores[ball] = 10;
            scores[ball + 1] = 0;
            ball += 2;
            frame++;
        } else if (c == '/') {
            scores[ball - 1] = 10 - scores[ball - 2];
            ball++;
        } else if (c == '-') {
            scores[ball] = 0;
            ball++;
        } else {
            scores[ball] = c - '0';
            ball++;
            if (ball % 2 == 0) {
                if (scores[ball - 1] + scores[ball - 2] == 10)
                    scores[ball] = '/';
                ball++;
                frame++;
            }
        }
        if (frame > 10)
            break;
    }
    for (int i = 0; i < 10; i++) {
        if (scores[i * 2] == 10) {
            total += 10 + scores[i * 2 + 2] + scores[i * 2 + 3];
            if (scores[i * 2 + 2] == 10)
                total += scores[i * 2 + 4];
        } else if (scores[i * 2] + scores[i * 2 + 1] == 10) {
            total += 10 + scores[i * 2 + 2];
        } else {
            total += scores[i * 2] + scores[i * 2 + 1];
        }
    }
    return total;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}