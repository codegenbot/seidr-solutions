int solve(string s) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            score += 10;
        } else if (s[i] == '/') {
            score += 10 - (s[i-1] - '0');
        } else if (s[i] == '-') {
            continue;
        } else {
            score += s[i] - '0';
        }
        frame++;
        if (frame == 2 || s[i] == 'X') {
            frame = 0;
        }
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << solve(s) << endl;
    return 0;
}