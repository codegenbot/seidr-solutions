int getBowlingScore(string s) {
    int score = 0;
    int frame = 1;
    int rolls = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            score += 10;
            if (frame < 10) {
                score += (s[i + 2] == 'X') ? 10 : (s[i + 2] - '0');
                score += (s[i + 4] == 'X') ? 10 : (s[i + 4] == '/' ? 10 - (s[i + 2] - '0') : (s[i + 4] - '0'));
            }
            rolls = 0;
            frame++;
        } else if (s[i] == '/') {
            score += 10 - (s[i - 1] - '0');
            score += (s[i + 1] == 'X') ? 10 : (s[i + 1] - '0');
            rolls = 0;
            frame++;
        } else {
            score += s[i] - '0';
            rolls++;
            if (rolls == 2 || s[i] == '-') {
                rolls = 0;
                frame++;
            }
        }
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << getBowlingScore(s) << endl;
    return 0;
}