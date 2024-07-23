int getScore(string s) {
    int score = 0;
    int frame = 1;
    int rolls = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            score += 10;
            if (frame < 10) {
                score += s[i + 1] == 'X' ? 10 : (s[i + 1] == '/' ? 10 - s[i + 2] + '0' : s[i + 1] - '0');
                score += s[i + 2] == 'X' ? 10 : (s[i + 2] == '/' ? 10 - s[i + 3] + '0' : s[i + 2] - '0');
                rolls += 1;
            }
            rolls += 2;
        } else if (s[i] == '/') {
            score += 10 - s[i - 1] + '0';
            score += s[i + 1] == 'X' ? 10 : s[i + 1] - '0';
            rolls += 1;
        } else {
            score += s[i] - '0';
            if (frame < 10) {
                rolls += 1;
            }
        }
        if (rolls == 2 || s[i] == 'X' || s[i] == '/') {
            frame++;
            rolls = 0;
        }
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << getScore(s) << endl;
    return 0;
}