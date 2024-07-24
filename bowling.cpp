int scoreBowlingRound(string s) {
    int score = 0;
    int frame = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 10;
            if (frame < 9) {
                score += (s[frame + 1] == 'X') ? 10 : (isdigit(s[frame + 1]) ? s[frame + 1] - '0' : 10);
                score += (s[frame + 2] == 'X') ? 10 : (s[frame + 2] == '/' ? 10 - (s[frame + 1] - '0') : (isdigit(s[frame + 2]) ? s[frame + 2] - '0' : 10));
            }
            frame++;
        } else if (isdigit(c)) {
            score += c - '0';
            if (frame < 9 && isdigit(s[frame + 1])) {
                score += s[frame + 1] - '0';
                if (c + s[frame + 1] - '0' == 10) {
                    score += s[frame + 2] == '/' ? 10 - (s[frame + 1] - '0') : (isdigit(s[frame + 2]) ? s[frame + 2] - '0' : 0);
                }
            }
            frame++;
        } else if (c == '/') {
            score += 10 - (s[frame - 1] - '0');
            if (frame < 9) {
                score += (s[frame + 1] == 'X') ? 10 : (isdigit(s[frame + 1]) ? s[frame + 1] - '0' : 10);
            }
            frame++;
        }
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << scoreBowlingRound(s) << endl;
    return 0;
}