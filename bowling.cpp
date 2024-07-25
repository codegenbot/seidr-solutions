int score(string s) {
    int res = 0, frame = 1, ball = 0;
    for (char c : s) {
        if (c == 'X') {
            res += 10;
            if (frame < 10) {
                res += (s[ball + 1] == 'X') ? 10 + ((s[ball + 2] == 'X') ? 10 : (s[ball + 2] - '0')) : ((s[ball + 2] == '/') ? 10 : (s[ball + 1] - '0') + (s[ball + 2] - '0'));
            }
            ball++;
        } else if (c == '/') {
            res += 10 - (s[ball - 1] - '0');
            res += (frame < 10) ? (s[ball + 1] == 'X' ? 10 : s[ball + 1] - '0') : 0;
            ball++;
        } else {
            res += c - '0';
            if (frame < 10 && ball % 2 == 1 && c != '-') {
                res += (c == '-') ? 0 : (s[ball - 1] == '/' ? 10 - (s[ball] - '0') : 0);
            }
        }
        ball++;
        if (ball % 2 == 0) {
            frame++;
        }
    }
    return res;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}