int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    int i = 0;
    while (frame <= 10) {
        if (s[i] == 'X') {
            score += 10;
            score += (s[i + 1] == 'X') ? 10 : (isdigit(s[i + 1]) ? s[i + 1] - '0' : 10);
            score += (isdigit(s[i + 2]) ? s[i + 2] - '0' : (s[i + 2] == 'X') ? 10 : 10);
            i++;
        } else if (isdigit(s[i])) {
            score += s[i] - '0';
            score += (s[i + 1] == '/') ? 10 - (s[i] - '0') : (isdigit(s[i + 1]) ? s[i + 1] - '0' : 0);
            i += 2;
        } else if (s[i] == '/') {
            score += 10 - (s[i - 1] - '0');
            score += (isdigit(s[i + 1]) ? s[i + 1] - '0' : (s[i + 1] == 'X') ? 10 : 0);
            i += 2;
        }
        frame++;
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << bowlingScore(s) << endl;
    return 0;
}