int score(const string &s) {
    int total = 0;
    int frame = 1;
    int ball = 1;
    for (char c : s) {
        if (c == 'X') {
            total += 10;
            frame++;
            if (frame > 10) break;
        } else if (c == '/') {
            total += 10 - (s[ball - 2] - '0');
            frame++;
            if (frame > 10) break;
        } else if (c == '-') {
            frame++;
            if (frame > 10) break;
        } else {
            total += c - '0';
            if (ball % 2 == 0) frame++;
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