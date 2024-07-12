int score(string s) {
    int total = 0;
    int frame = 1;
    int i = 0;
    while (frame <= 10 && i < s.size()) {
        if (s[i] == 'X') {
            total += 10;
            if (frame < 10) {
                total += (s[i + 2] == 'X') ? 10 : (s[i + 2] - '0');
                total += (s[i + 4] == 'X') ? 10 : (s[i + 4] == '/' ? 10 - (s[i + 2] - '0') : (s[i + 4] - '0'));
                i++;
            } else {
                total += (s[i + 2] == 'X') ? 10 : (s[i + 2] == '/' ? 10 : (s[i + 2] - '0'));
                total += (s[i + 4] == 'X') ? 10 : (s[i + 4] == '/' ? 10 - (s[i + 2] - '0') : (s[i + 4] - '0'));
                total += (s[i + 6] == 'X') ? 10 : (s[i + 6] == '/' ? 10 : (s[i + 6] - '0'));
            }
            i++;
        } else if (s[i + 1] == '/') {
            total += 10;
            total += (s[i + 2] == 'X') ? 10 : (s[i + 2] - '0');
            i += 2;
        } else {
            total += (s[i] - '0') + (s[i + 1] - '0');
            i += 2;
        }
        frame++;
    }
    return total;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}