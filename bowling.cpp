int score(string s) {
    int idx = 0, res = 0, frame = 1;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'X') {
            res += 10;
            if (frame < 10) res += (s[i + 1] == 'X' ? 10 : (isdigit(s[i + 1]) ? s[i + 1] - '0' : 10));
            if (frame < 9) res += (s[i + 2] == 'X' ? 10 : (s[i + 2] == '/' ? 10 : (isdigit(s[i + 2]) ? s[i + 2] - '0' : 0)));
            frame++;
        } else if (isdigit(s[i])) {
            res += s[i] - '0';
            if (s[i + 1] == '/') res += 10 - (s[i] - '0');
            else if (s[i + 1] == 'X') res += 10;
            frame++;
        } else if (s[i] == '/') {
            res += 10 - (s[i - 1] - '0');
            res += (isdigit(s[i + 1]) ? s[i + 1] - '0' : 10);
            frame++;
        }
    }
    return res;
}
int main() {
    string s;
    cin >> s;
    cout << score(s);
    return 0;
}