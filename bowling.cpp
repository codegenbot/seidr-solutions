int calculateBowlingScore(string s) {
    int score = 0, frame = 1, ball = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10;
            if (s[i + 1] == 'X') {
                score += 10;
                if (s[i + 2] == 'X') {
                    score += 10;
                } else {
                    score += s[i + 2] - '0';
                }
            } else {
                if (s[i + 2] == '/') {
                    score += 10;
                } else {
                    score += s[i + 1] - '0' + s[i + 2] - '0';
                }
            }
            frame++;
        } else if (s[i] == '/') {
            score += 10 - s[i - 1] + '0';
            if (s[i + 1] == 'X') {
                score += 10;
            } else {
                score += s[i + 1] - '0';
            }
            frame++;
            ball = 0;
        } else if (s[i] == '-') {
            ball++;
            if (ball == 2) {
                frame++;
                ball = 0;
            }
        } else {
            score += s[i] - '0';
            ball++;
            if (ball == 2) {
                frame++;
                ball = 0;
            }
        }
        if (frame == 11) break;
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << calculateBowlingScore(s) << endl;
    return 0;
}