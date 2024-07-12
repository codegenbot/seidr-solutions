int score(string s) {
    int res = 0;
    int frame = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            res += 10;
            res += (s[i + 1] == 'X' ? 10 : isdigit(s[i + 1]) ? s[i + 1] - '0' : 10);
            res += (s[i + 2] == 'X' ? 10 : s[i + 2] == '/' ? 10 - (s[i + 1] - '0') : isdigit(s[i + 2]) ? s[i + 2] - '0' : 10);
            frame++;
        } else if (s[i] == '/') {
            res += 10 - (s[i - 1] - '0');
            res += isdigit(s[i + 1]) ? s[i + 1] - '0' : 10;
            frame++;
        } else if (isdigit(s[i])) {
            res += s[i] - '0';
            if (isdigit(s[i + 1])) {
                res += s[i + 1] - '0';
                frame++;
            }
        }
        if (frame == 10) break;
    }
    return res;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}