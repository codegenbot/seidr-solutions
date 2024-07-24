int score(string s) {
    int total = 0, frame = 0, ball = 0;
    for (char c : s) {
        if (c == 'X') {
            total += 10;
            if (frame < 9) {
                total += (s[ball + 1] == 'X') ? 10 + ((s[ball + 2] == 'X') ? 10 : s[ball + 2] - '0') : (s[ball + 2] == '/') ? 10 : s[ball + 1] - '0' + s[ball + 2] - '0';
            }
            ball++;
        } else if (c == '/') {
            total += 10 - (s[ball - 1] - '0');
            total += (frame < 9) ? (s[ball + 1] == 'X') ? 10 : s[ball + 1] - '0' : 0;
            ball++;
        } else if (c == '-') {
            total += 0;
        } else {
            total += c - '0';
        }
        ball++;
        if (c == 'X' || ball % 2 == 0) {
            frame++;
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