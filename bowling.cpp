int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < s.size() && frame < 10; ++i) {
        if (s[i] == 'X') {
            score += 10;
            if (s[i + 2] == 'X') {
                score += 10 + (s[i + 4] == 'X' ? 10 : (s[i + 4] == '-' ? 0 : s[i + 4] - '0'));
            } else {
                score += (s[i + 2] == '/' ? 10 : (s[i + 2] == '-' ? 0 : s[i + 2] - '0')) + (s[i + 4] == '/' ? 10 : (s[i + 4] == '-' ? 0 : s[i + 4] - '0'));
            }
            ++frame;
        } else if (s[i + 1] == '/') {
            score += 10 + (s[i + 2] == 'X' ? 10 : (s[i + 2] == '-' ? 0 : s[i + 2] - '0'));
            ++frame;
            i += 2;
        } else {
            score += (s[i] == '-' ? 0 : s[i] - '0') + (s[i + 1] == '-' ? 0 : s[i + 1] - '0');
            ++frame;
            ++i;
        }
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << bowlingScore(s) << endl;
    return 0;
}