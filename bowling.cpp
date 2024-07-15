int scoreOfBowlingRound(string s) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < s.size() && frame < 10; ++i) {
        if (s[i] == 'X') {
            score += 10;
            if (i + 2 < s.size()) {
                if (s[i + 2] == 'X') {
                    score += 10;
                    if (i + 4 < s.size()) {
                        score += (s[i + 4] == 'X') ? 10 : (s[i + 4] - '0');
                    }
                } else {
                    score += (s[i + 2] == '/') ? 10 : (s[i + 2] - '0');
                }
            }
            frame++;
        } else if (s[i] == '/') {
            score += 10 - (s[i - 1] - '0');
            if (i + 1 < s.size()) {
                score += (s[i + 1] == 'X') ? 10 : (s[i + 1] - '0');
            }
            frame++;
        } else {
            score += (s[i] == '-') ? 0 : (s[i] - '0');
            if (i + 1 < s.size() && s[i + 1] == '/') {
                score += 10 - (s[i] - '0');
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