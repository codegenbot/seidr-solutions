int bowling(string s) {
    int score = 0, frame = 1, ball = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                score += (s[ball+1]=='X' ? 10 : s[ball+1]-'0');
                score += (s[ball+2]=='X' ? 10 : (s[ball+2]=='/' ? 10-(s[ball+1]-'0') : s[ball+2]-'0'));
            }
            ball++;
        } else if (c == '/') {
            score += 10 - (s[ball-1]-'0');
            score += (s[ball+1]=='X' ? 10 : s[ball+1]-'0');
            ball++;
        } else if (c == '-') {
            // do nothing
        } else {
            score += c - '0';
            if (frame < 10 && ball % 2 == 1 && s[ball-1] != '/') {
                if (c != '0') {
                    score += (s[ball-1]=='X' ? 10 : s[ball-1]-'0');
                }
            }
        }
        if (frame < 10 && (c == 'X' || ball % 2 == 1)) {
            frame++;
        }
        ball++;
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << bowling(s) << endl;
    return 0;
}