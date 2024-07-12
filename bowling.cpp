int calculateBowlingScore(string s) {
    int score = 0;
    int frame = 1;
    int i = 0;
    while (frame <= 10) {
        if (s[i] == 'X') {
            score += 10;
            score += (s[i+2] == 'X' ? 10 : (s[i+2] == '/' ? 10 - (s[i+1] - '0') : s[i+1] + s[i+2] - 2*'0'));
            if (s[i+1] == 'X') {
                score += (s[i+4] == 'X' ? 10 : (s[i+4] == '/' ? 10 - (s[i+3] - '0') : s[i+3] + s[i+4] - 2*'0'));
            }
            i++;
        } else if (s[i+1] == '/') {
            score += 10;
            score += (s[i+2] == 'X' ? 10 : s[i+2] - '0');
        } else {
            score += s[i] + s[i+1] - 2*'0';
        }
        i += (s[i] == 'X' ? 1 : 2);
        frame++;
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << calculateBowlingScore(s) << endl;
    return 0;
}