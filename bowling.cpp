int calculateBowlingScore(string s) {
    int score = 0, frame = 1, ball = 0;
    map<char, int> value = {{'X', 10}, {'/', 10}, {'-', 0}};
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            score += value[s[i]] + value[s[i + 1]] + value[s[i + 2]];
            ball = 0;
            frame++;
        } else if (s[i] == '/') {
            score += value[s[i]] - value[s[i - 1]] + value[s[i + 1]];
            ball = 0;
            frame++;
        } else if (s[i] == '-') {
            ball++;
            if (ball == 2) {
                ball = 0;
                frame++;
            }
        } else {
            score += s[i] - '0';
            ball++;
            if (ball == 2) {
                ball = 0;
                frame++;
            }
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