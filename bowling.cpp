int score(string s) {
    int total = 0;
    int frame = 0;
    int frames[11] = {0};
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            frames[frame] = 10 + (s[i + 1] == 'X' ? 10 : (s[i + 1] == '/' ? 10 : (s[i + 2] == '/' ? 10 : (s[i + 2] == '-' ? 0 : s[i + 2] - '0'))));
            frame++;
        } else if (s[i] == '/') {
            frames[frame] = 10 + (s[i + 1] == 'X' ? 10 : (s[i + 1] == '-' ? 0 : s[i + 1] - '0'));
            frame++;
            i++;
        } else if (s[i] == '-') {
            frames[frame] = 0;
            frame++;
        } else {
            frames[frame] = s[i] - '0';
            frame++;
        }
    }
    for (int i = 0; i < 10; i++) {
        total += frames[i];
        if (frames[i] == 10) {
            total += frames[i + 1] + frames[i + 2];
        } else if (frames[i] + frames[i + 1] == 10) {
            total += frames[i + 2];
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