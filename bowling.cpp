int score(string s) {
    int totalScore = 0;
    int rolls = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            totalScore += 10;
            totalScore += (s[i + 2] == 'X') ? 10 : (s[i + 2] == '/') ? 10 - (s[i + 1] - '0') : s[i + 1] - '0' + s[i + 2] - '0';
            rolls++;
        } else if (s[i] == '/') {
            totalScore += 10 - (s[i - 1] - '0');
            totalScore += (s[i + 1] == 'X') ? 10 : s[i + 1] - '0';
            rolls += 2;
        } else if (s[i] == '-') {
            totalScore += 0;
        } else {
            totalScore += s[i] - '0';
            rolls++;
        }
        if (rolls == 20) break;
    }
    return totalScore;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}