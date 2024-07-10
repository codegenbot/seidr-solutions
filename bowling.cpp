int calculateBowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'X') {
            score += 10;
            score += (s[i + 2] == 'X' ? 10 : isdigit(s[i + 2]) ? s[i + 2] - '0' : 10);
            score += (s[i + 4] == 'X' ? 10 : s[i + 4] == '/' ? (10 - (s[i + 2] == 'X' ? 10 : s[i + 2] - '0')) : isdigit(s[i + 4]) ? s[i + 4] - '0' : 10);
            ++frame;
        } else if (isdigit(s[i])) {
            score += s[i] - '0';
            if (s[i + 1] == '/') {
                score += (10 - (s[i] - '0'));
                ++i;
            }
            ++frame;
        } else if (s[i] == '/') {
            score += (10 - (s[i - 1] - '0'));
            ++frame;
        }
        if (frame > 10) break;
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << calculateBowlingScore(s) << endl;
    return 0;
}