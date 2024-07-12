int bowlingScore(const string& s) {
    int score = 0, frame = 0, ball = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 10;
            if (frame < 8) {
                score += (s[ball + 1] == 'X' ? 10 : (isdigit(s[ball + 1]) ? s[ball + 1] - '0' : 10));
                score += (s[ball + 2] == 'X' ? 10 : (s[ball + 2] == '/' ? 10 - (s[ball + 1] - '0') : (isdigit(s[ball + 2]) ? s[ball + 2] - '0' : 10)));
            }
            ++frame;
            ball += 1;
        } else if (c == '/') {
            score += 10 - (s[ball - 1] - '0');
            score += (s[ball + 1] == 'X' ? 10 : (isdigit(s[ball + 1]) ? s[ball + 1] - '0' : 10));
            ++frame;
            ball += 1;
        } else if (isdigit(c)) {
            score += c - '0';
            if (frame < 9 && c == '9' && s[ball + 1] == '/') {
                score += 10 - (s[ball] - '0');
            }
            ++ball;
            if ((ball - frame * 2) % 2 == 0) {
                ++frame;
            }
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