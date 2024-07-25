int bowlingScore(string s) {
    int score = 0, frame = 0, throwIndex = 0;
    for (int i = 0; i < 10; ++i) {
        if (s[throwIndex] == 'X') {
            score += 10 + (s[throwIndex + 1] == 'X' ? 10 : (isdigit(s[throwIndex + 1]) ? s[throwIndex + 1] - '0' : 10));
            score += (s[throwIndex + 2] == 'X' ? 10 : (isdigit(s[throwIndex + 2]) ? s[throwIndex + 2] - '0' : 10));
            throwIndex += 1;
        } else if (s[throwIndex + 1] == '/') {
            score += 10;
            score += (isdigit(s[throwIndex + 2]) ? s[throwIndex + 2] - '0' : 10);
            throwIndex += 2;
        } else {
            score += (isdigit(s[throwIndex]) ? s[throwIndex] - '0' : 0);
            score += (isdigit(s[throwIndex + 1]) ? s[throwIndex + 1] - '0' : 0);
            throwIndex += 2;
        }
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << bowlingScore(s) << endl;
    return 0;
}