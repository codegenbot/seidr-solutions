int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    int throwIndex = 0;
    while (frame < 10) {
        if (s[throwIndex] == 'X') {
            score += 10;
            score += (s[throwIndex + 2] == 'X') ? 10 : (s[throwIndex + 2] == '/') ? 10 - (s[throwIndex + 1] - '0') : s[throwIndex + 1] - '0' + s[throwIndex + 2] - '0';
            throwIndex++;
        } else if (s[throwIndex + 1] == '/') {
            score += 10;
            score += (s[throwIndex + 2] == 'X') ? 10 : s[throwIndex + 2] - '0';
            throwIndex += 2;
        } else {
            score += s[throwIndex] - '0' + s[throwIndex + 1] - '0';
            throwIndex += 2;
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