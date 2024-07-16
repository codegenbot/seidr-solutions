int getScore(string s) {
    int score = 0;
    int frame = 0;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] == 'X') {
            score += 10;
            if (frame < 9) {
                score += (s[i+2] == 'X') ? 10 + ((i+4 < n) ? s[i+4] - '0' : 0) : (s[i+1] == 'X') ? 10 : (s[i+1] - '0') + (s[i+2] == '/' ? 10 : s[i+2] - '0');
            }
            frame++;
        } else if (s[i] == '/') {
            score += 10 - (s[i-1] - '0');
            score += (i+1 < n) ? s[i+1] - '0': 0;
        } else if (s[i] == '-') {
            score += 0;
        } else {
            score += s[i] - '0';
        }
        frame++;
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << getScore(s) << endl;
    return 0;
}