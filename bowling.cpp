int score(string s) {
    int total = 0, frame = 0, ball = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'X') {
            total += 10;
            if (frame < 9) {
                total += s[i+1] == 'X' ? 10 : isdigit(s[i+1]) ? s[i+1]-'0' : 10;
                total += s[i+2] == 'X' ? 10 : isdigit(s[i+2]) ? s[i+2]-'0' : 10;
                ball += 2;
            } else {
                total += s[i+1] == 'X' ? 10 : isdigit(s[i+1]) ? s[i+1]-'0' : 10;
                total += s[i+2] == 'X' ? 10 : s[i+2] == '/' ? 10-s[i+1]+'0' : isdigit(s[i+2]) ? s[i+2]-'0' : 10;
            }
            ball++;
        } else if (isdigit(s[i])) {
            total += s[i]-'0';
            ball++;
            if (s[i] == '/')
                total += 10-s[i-1]+'0';
        } else if (s[i] == '/') {
            total += 10-s[i-1]+'0';
            ball++;
        }
        if (ball == 2 || s[i] == 'X' || s[i] == '/') {
            frame++;
            ball = 0;
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