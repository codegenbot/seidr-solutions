int score(string s) {
    int total = 0;
    int frame = 0;
    int f[30];
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            f[frame] = 10;
            frame++;
        } else if (s[i] == '/') {
            f[frame] = 10 - f[frame-1];
            frame++;
        } else if (s[i] == '-') {
            f[frame] = 0;
            frame++;
        } else {
            f[frame] = s[i] - '0';
            frame++;
        }
    }
    for (int i = 0; i < 10; i++) {
        if (f[i] == 10) {
            total += 10 + f[i+1] + f[i+2];
        } else if (f[i] + f[i+1] == 10) {
            total += 10 + f[i+2];
            i++;
        } else {
            total += f[i] + f[i+1];
            i++;
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