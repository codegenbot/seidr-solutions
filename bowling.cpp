int score(string s) {
    int total = 0, frame = 0, ball = 0;
    for (char c : s) {
        if (c == 'X') {
            total += 10;
            if (frame < 10) {
                total += s[ball + 1] == 'X' ? 10 : s[ball + 1] - '0';
                total += s[ball + 2] == 'X' ? 10 : (s[ball + 2] == '/' ? 10 - (s[ball + 1] - '0') : s[ball + 2] - '0');
            }
            frame++;
            ball++;
        } else if (c == '/') {
            total += 10 - s[ball - 1] + '0';
        } else {
            total += c - '0';
        }
        ball++;
    }
    return total;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}