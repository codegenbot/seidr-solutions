int score(string s) {
    int frames = 10;
    int score = 0;
    int i = 0;
    for (int frame = 0; frame < frames; ++frame) {
        if (s[i] == 'X') {
            score += 10;
            score += (s[i + 1] == 'X') ? 10 : (s[i + 1] == '/' ? 10 - (s[i + 2] - '0') : s[i + 1] - '0' + s[i + 2] - '0');
            i += 1;
        } else if (s[i + 1] == '/') {
            score += 10;
            score += (s[i + 2] == 'X') ? 10 : (s[i + 2] - '0');
            i += 2;
        } else {
            score += (s[i] - '0' + s[i + 1] - '0');
            i += 2;
        }
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}