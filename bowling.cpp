int scoreOfBowlingRound(string s) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            score += 10;
            if (frame < 9) {
                score += (s[i + 2] == 'X' ? 10 : (s[i + 2] == '/' ? 10 - (s[i + 1] - '0') : s[i + 1] - '0' + s[i + 2] - '0'));
                if (s[i + 2] != 'X') {
                    i += 2;
                }
            }
            frame++;
        } else if (s[i] == '/') {
            score += 10 - (s[i - 1] - '0');
            score += (s[i + 1] == 'X' ? 10 : s[i + 1] - '0');
            if (frame < 9) {
                i += 1;
            }
            frame++;
        } else if (s[i] >= '0' && s[i] <= '9') {
            score += s[i] - '0';
            if (frame < 9) {
                if (i + 1 < s.size() && s[i + 1] == '/') {
                    score += 10 - (s[i] - '0');
                    i += 1;
                }
            }
            frame++;
        }
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << scoreOfBowlingRound(s) << endl;
    return 0;
}