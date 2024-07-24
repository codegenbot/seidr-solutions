int score(string s) {
    int total = 0;
    int frame = 1;
    int ball = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            total += 10;
            if (frame < 10) {
                total += (s[i + 1] == 'X' ? 10 : (s[i + 1] - '0')) + (s[i + 2] == 'X' ? 10 : (s[i + 2] - '0'));
            }
            ball = 0;
            frame++;
        } else if (s[i] == '/') {
            total += 10 - (s[i - 1] - '0') + (s[i + 1] == 'X' ? 10 : (s[i + 1] - '0'));
            ball = 0;
            frame++;
        } else if (s[i] == '-') {
            ball++;
        } else {
            total += s[i] - '0';
            ball++;
            if (ball == 2) {
                ball = 0;
                frame++;
            }
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