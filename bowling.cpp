int score(string s) {
    int frames = 10, total = 0, frame = 0;
    for (int i = 0; i < s.size(); i++) {
        if (frame == frames) break;
        if (s[i] == 'X') {
            total += 10;
            total += (s[i + 2] == 'X' ? 10 : (s[i + 2] == '/' ? 10 - (s[i + 1] - '0') : s[i + 1] - '0' + s[i + 2] - '0'));
            i++;
            frame++;
        } else if (s[i] == '/') {
            total += 10 - (s[i - 1] - '0');
            total += (s[i + 1] == 'X' ? 10 : s[i + 1] - '0');
            i++;
            frame++;
        } else {
            total += s[i] - '0';
            if (s[i + 1] == '/') {
                total += 10 - (s[i] - '0');
                i++;
            }
            frame++;
        }
    }
    return total;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}