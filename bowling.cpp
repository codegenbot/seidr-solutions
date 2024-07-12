int score(const string& s) {
    int frame = 1, score = 0, i = 0;
    while (frame <= 10 && i < s.size()) {
        if (s[i] == 'X') {
            score += 10;
            score += (s[i+2] == 'X') ? 10 : (isdigit(s[i+1]) ? s[i+1]-'0' : 10);
            score += (s[i+2] == 'X' && s[i+4] == 'X') ? 10 : (isdigit(s[i+2]) ? s[i+2]-'0' : 10);
            i += 2;
        } else if (isdigit(s[i])) {
            score += s[i] - '0';
            if (s[i+1] == '/') {
                score += 10 - (s[i] - '0');
            } else if (isdigit(s[i+1])) {
                score += s[i+1] - '0';
            }
            i += 2;
        } else if (s[i] == '/') {
            score += 10 - (s[i-1] - '0');
            score += (isdigit(s[i+1]) ? s[i+1]-'0' : 10);
            i += 2;
        }
        frame++;
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << score(s);
    return 0;
}