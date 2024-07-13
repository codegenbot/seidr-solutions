int getBowlingScore(string s) {
    int score = 0, frame = 0, ball = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 10;
            if (frame < 9)
                score += (s[ball + 1] == 'X' ? 10 : (s[ball + 1] == '/' ? 10 - s[ball - 1] + '0' : s[ball + 1] - '0') + (s[ball + 2] == '/' ? 10 - s[ball + 1] + '0' : (s[ball + 2] == 'X' ? 10 : s[ball + 2] - '0')));
            frame++;
        } else if (c == '/') {
            score += 10 - s[ball - 1] + '0';
            if (frame < 9)
                score += (s[ball + 1] == 'X' ? 10 : s[ball + 1] - '0');
            frame++;
        } else {
            score += c - '0';
            if (frame < 9 && ball % 2 == 1 && s[ball - 1] != '/')
                if (c == '-')
                    frame++;
            if (ball % 2 == 1 || c == 'X')
                frame++;
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