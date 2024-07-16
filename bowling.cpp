int score(string s) {
    int res = 0, frame = 0, ball = 0;
    for (char c : s) {
        if (c == 'X') {
            res += 10;
            if (frame < 9) {
                res += (s[ball + 1] == 'X') ? 10 : (isdigit(s[ball + 1]) ? s[ball + 1] - '0' : 10);
                res += (s[ball + 2] == 'X') ? 10 : (s[ball + 2] == '/' ? 10 - (s[ball + 1] - '0') : (isdigit(s[ball + 2]) ? s[ball + 2] - '0' : 10));
            }
            ball++;
        } else if (isdigit(c)) {
            res += c - '0';
            if (frame < 9 && ball % 2 == 1 && s[ball - 1] == '/') {
                res += c - '0';
            }
            ball++;
        } else if (c == '/') {
            res += 10 - (s[ball - 1] - '0');
            if (frame < 9) {
                res += (s[ball + 1] == 'X') ? 10 : (isdigit(s[ball + 1]) ? s[ball + 1] - '0' : 10);
            }
            ball++;
        }
        if (c == 'X' || ball % 2 == 0) {
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