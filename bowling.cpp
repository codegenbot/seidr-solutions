int score(string s) {
    int totalScore = 0;
    int frame = 0;
    for (int i = 0; i < s.length() && frame < 10; ++i) {
        if (s[i] == 'X') {
            totalScore += 10;
            if (s[i + 1] == 'X') {
                totalScore += 10;
                if (s[i + 2] == 'X') {
                    totalScore += 10;
                } else if (s[i + 2] == '-') {
                    totalScore += 0;
                } else {
                    totalScore += s[i + 2] - '0';
                }
            } else if (s[i + 1] == '/') {
                totalScore += 10;
            } else if (s[i + 2] == '/') {
                totalScore += 10;
            } else {
                totalScore += s[i + 1] - '0' + s[i + 2] - '0';
            }
            frame++;
        } else if (s[i] == '/') {
            totalScore += 10 - (s[i - 1] - '0');
            if (s[i + 1] == 'X') {
                totalScore += 10;
            } else {
                totalScore += s[i + 1] - '0';
            }
            frame++;
        } else if (s[i] == '-') {
            totalScore += 0;
            frame++;
        } else {
            totalScore += s[i] - '0';
            frame++;
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