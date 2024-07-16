int score_bowling(string s) {
    int score = 0, frame = 0, idx = 0;
    while (frame < 10) {
        if (s[idx] == 'X') {
            score += 10;
            score += (s[idx + 1] == 'X') ? 10 + ((s[idx + 2] == 'X') ? 10 : (s[idx + 2] - '0')) : (s[idx + 1] == '/' ? 10 : (s[idx + 1] - '0' + s[idx + 2] - '0'));
            if (frame == 9) break;
            idx++;
        } else if (s[idx + 1] == '/') {
            score += 10;
            score += (s[idx + 2] == 'X' ? 10 : (s[idx + 2] - '0'));
            idx += 2;
        } else {
            score += (s[idx] == '-' ? 0 : (s[idx] - '0')) + (s[idx + 1] == '-' ? 0 : (s[idx + 1] == '/' ? 10 - (s[idx] - '0') : (s[idx + 1] - '0')));
            idx += 2;
        }
        frame++;
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << score_bowling(s) << endl;
    return 0;
}