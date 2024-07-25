int bowling(string s) {
    int score = 0;
    int frame = 1;
    int bowl = 0;
    int rolls[21] = {0};
    for (char c : s) {
        if (c == 'X') {
            rolls[bowl++] = 10;
            rolls[bowl++] = 0;
            frame++;
        } else if (c == '/') {
            rolls[bowl - 1] = 10 - rolls[bowl - 2];
            frame++;
        } else if (c == '-') {
            rolls[bowl++] = 0;
        } else {
            rolls[bowl++] = c - '0';
        }
    }
    for (int i = 0; frame <= 10 && i < bowl; i++) {
        if (rolls[i] == 10) {
            score += 10 + rolls[i + 1] + rolls[i + 2];
            frame++;
        } else if (rolls[i] + rolls[i + 1] == 10) {
            score += 10 + rolls[i + 2];
            i++;
            frame++;
        } else {
            score += rolls[i] + rolls[i + 1];
            i++;
            frame++;
        }
    }
    return score;
}
int main() {
    string s;
    cin >> s;
    cout << bowling(s) << endl;
    return 0;
}