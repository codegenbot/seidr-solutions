int getBowlingScore(string s) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    
    for (char c : s) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                score += ((s[ball+2] == 'X') ? 10 : (s[ball+2]-'0'));
                score += ((s[ball+4] == 'X') ? 10 : (s[ball+4] == '/' ? 10 - (s[ball+2]-'0') : (s[ball+4]-'0')));
            }
            ball += 2;
            frame++;
        } else if (c == '/') {
            score += 10 - (s[ball-1]-'0');
        } else if (c >= '0' && c <= '9') {
            score += c - '0';
        }
        ball++;
    }
    
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << getBowlingScore(s) << endl;
    return 0;
}