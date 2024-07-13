int bowling_score(string s) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'X') {
            score += 10;
            if (frame < 9) {
                score += (s[i + 2] == 'X') ? 10 : (s[i + 2] == '/' ? 10 - (s[i + 1] - '0') : s[i + 1] - '0' + s[i + 2] - '0');
                score += (s[i + 4] == 'X') ? 10 : (s[i + 4] == '/' ? 10 - (s[i + 3] - '0') : s[i + 3] - '0');
                i++;
            } else {
                score += (s[i + 2] == 'X') ? 10 : (s[i + 2] == '/' ? 10 - (s[i + 1] - '0') : s[i + 1] - '0' + s[i + 2] - '0');
                score += (s[i + 3] == 'X') ? 10 : (s[i + 3] == '/' ? 10 - (s[i + 2] - '0') : s[i + 2] - '0');
                i += 2;
            }
            frame++;
        } else if (s[i] == '/') {
            score += 10 - (s[i - 1] - '0');
            score += (s[i + 1] == 'X') ? 10 : s[i + 1] - '0';
            frame++;
        } else {
            score += s[i] - '0';
            frame++;
        }
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << bowling_score(s) << endl;
    return 0;
}