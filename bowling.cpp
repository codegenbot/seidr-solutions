int scoreOfBowlingRound(string s) {
    int score = 0, frame = 0, ball = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 10;
            if (frame < 9) {
                score += (s[ball + 1] == 'X') ? 10 + ((s[ball + 2] == 'X') ? 10 : s[ball + 2] - '0') : (s[ball + 2] == '/') ? 10 : s[ball + 1] - '0' + s[ball + 2] - '0';
                ball++;
            }
            frame++;
        } else if (c == '/') {
            score += 10 - (s[ball - 1] - '0');
            score += (frame < 9) ? (s[ball + 1] == 'X') ? 10 : s[ball + 1] - '0' : 0;
            ball++;
            frame++;
        } else if (c == '-') {
            score += 0;
            frame++;
        } else {
            score += c - '0';
            frame++;
        }
        ball++;
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << scoreOfBowlingRound(s) << endl;
    return 0;
}