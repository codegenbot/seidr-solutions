int score(string s) {
    int frame = 1, score = 0, i = 0;
    while (frame <= 10) {
        if (s[i] == 'X') {
            score += 10;
            score += (s[i + 2] == 'X' ? 10 : isdigit(s[i + 1]) ? s[i + 1] - '0' : 10);
            score += (s[i + 4] == 'X' ? 10 : isdigit(s[i + 3]) ? s[i + 3] - '0' : 10);
            i++;
        } else if (isdigit(s[i]) && s[i + 1] == '/') {
            score += 10;
            score += (s[i + 2] == 'X' ? 10 : isdigit(s[i + 2]) ? s[i + 2] - '0' : 10);
            i += 2;
        } else if (isdigit(s[i]) && isdigit(s[i + 1])) {
            score += s[i] - '0' + s[i + 1] - '0';
            i += 2;
        }
        frame++;
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}