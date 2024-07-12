int score(string s) {
    int totalScore = 0;
    int frame = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            totalScore += 10;
            if (frame < 9) {
                totalScore += (s[i + 2] == 'X') ? 10 + ((s[i + 4] == 'X') ? 10 : (s[i + 4] - '0')) : ((s[i + 3] == '/') ? 10 : (s[i + 2] - '0') + (s[i + 3] - '0'));
            } else {
                totalScore += (s[i + 2] == 'X') ? 10 + ((s[i + 4] == 'X') ? 10 : (s[i + 4] - '0')) : ((s[i + 3] == '/') ? 10 : (s[i + 2] - '0') + (s[i + 3] - '0'));
            }
            frame++;
        } else if (s[i] == '/') {
            totalScore += 10 - (s[i - 1] - '0');
            totalScore += (s[i + 1] == 'X') ? 10 : (s[i + 1] - '0');
            frame++;
        } else if (s[i] == '-') {
            totalScore += 0;
            frame++;
        } else {
            totalScore += s[i] - '0';
        }
    }
    return totalScore;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}