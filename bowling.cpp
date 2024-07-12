int score(string s) {
    int res = 0, frame = 0, ball = 0;
    for (char c : s) {
        if (c == 'X') {
            res += 10;
            if (frame < 9) {
                res += s[ball + 1] == 'X' ? 10 + (s[ball + 2] == 'X' ? 10 : s[ball + 2] - '0') : s[ball + 2] == '/' ? 10 : s[ball + 1] + s[ball + 2] - 2 * '0';
            }
            ball++;
            frame++;
        } else if (c == '/') {
            res += 10 - s[ball - 1] + '0';
            res += s[ball + 1] == 'X' ? 10 : s[ball + 1] - '0';
            ball += 2;
            frame++;
        } else {
            res += c - '0';
            ball++;
            if (ball % 2 == 0) frame++;
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