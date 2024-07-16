int scoreBowlingRound(string s) {
    int score = 0;
    int frame = 1;
    int i = 0;
    while (frame <= 10) {
        if (s[i] == 'X') {
            score += 10;
            if (s[i + 2] == '/') {
                score += 10;
            } else {
                if (s[i + 1] == 'X') {
                    score += 10;
                } else {
                    score += s[i + 1] - '0';
                }
                if (s[i + 2] == 'X') {
                    score += 10;
                } else {
                    score += s[i + 2] - '0';
                }
            }
            i++;
        } else if (s[i + 1] == '/') {
            score += 10;
            score += s[i + 2] - '0';
            i += 2;
        } else {
            score += s[i] - '0';
            score += s[i + 1] - '0';
            if (s[i + 2] == '/') {
                score += 10 - (s[i + 1] - '0');
            }
            i += 2;
        }
        frame++;
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << scoreBowlingRound(s) << endl;
    return 0;
}