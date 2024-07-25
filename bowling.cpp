int scoreBowlingRound(string s) {
    int score = 0, frame = 0, ball = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 10;
            if (frame <= 9) {
                score += (s[ball + 1] == 'X') ? 10 + ((s[ball + 2] == 'X') ? 10 : (s[ball + 2] - '0')) : (s[ball + 2] == '/' ? 10 : (s[ball + 1] - '0') + (s[ball + 2] - '0'));
            }
            ball++;
            frame++;
        } else if (c == '/') {
            score += 10 - (s[ball - 1] - '0');
            score += (s[ball + 1] == 'X') ? 10 : (s[ball + 1] - '0');
            ball += 2;
            frame++;
        } else if (c == '-') {
            ball++;
            frame++;
        } else {
            score += c - '0';
            ball++;
            if ((c - '0') + (s[ball] - '0') == 10) {
                score += s[ball + 1] == '/' ? 10 - (c - '0') : 0;
            }
            frame++;
        }
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << scoreBowlingRound(s) << endl;
    return 0;
}