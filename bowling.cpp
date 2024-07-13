int score(string s) {
    int frame = 0, score = 0, i = 0;
    while (frame < 10) {
        if (s[i] == 'X') {
            score += 10;
            score += (s[i + 1] == 'X') ? 10 : (isdigit(s[i + 1]) ? s[i + 1] - '0' : 10);
            score += (s[i + 2] == 'X') ? 10 : (s[i + 2] == '/' ? 10 - (s[i + 1] - '0') : (isdigit(s[i + 2]) ? s[i + 2] - '0' : 10));
            i++;
        } else if (s[i + 1] == '/') {
            score += 10;
            score += (s[i + 2] == 'X') ? 10 : (isdigit(s[i + 2]) ? s[i + 2] - '0' : 10);
            i += 2;
        } else {
            score += (isdigit(s[i]) ? s[i] - '0' : 0);
            score += (isdigit(s[i + 1]) ? s[i + 1] - '0' : 0);
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