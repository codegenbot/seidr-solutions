int getScore(string s) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            score += 10;
            if (frame < 10) {
                score += (s[i + 1] == 'X') ? 10 : (s[i + 1] == '/' ? 10 - (s[i + 2] - '0') : s[i + 1] - '0');
                score += (s[i + 2] == 'X') ? 10 : (s[i + 2] == '/' ? 10 - (s[i + 3] - '0') : s[i + 2] - '0');
                frame++;
            }
            ball = 0;
        } else if (s[i] == '/') {
            score += 10 - (s[i - 1] - '0');
            score += (s[i + 1] == 'X') ? 10 : s[i + 1] - '0';
            ball = 0;
            frame++;
        } else {
            score += s[i] - '0';
            ball++;
            if (ball == 2 || s[i] == '-') {
                ball = 0;
                frame++;
            }
        }
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << getScore(s) << endl;
    return 0;
}