int bowlingScore(string s) {
    int i = 0, score = 0, frame = 0;
    while (i < s.size() && frame < 10) {
        if (s[i] == 'X') {
            score += 10;
            if (s[i + 2] == 'X') {
                score += 10 + ((i + 4 < s.size()) ? (s[i + 4] - '0') : 10);
            } else {
                score += ((i + 3 < s.size()) ? (s[i + 3] - '0') : 10);
            }
            i++;
        } else if (s[i + 1] == '/') {
            score += 10;
            score += ((i + 2 < s.size()) ? (s[i + 2] - '0') : 10);
            i += 2;
        } else {
            score += (s[i] - '0');
            score += (s[i + 1] - '0');
            i += 2;
        }
        frame++;
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << bowlingScore(s) << endl;
    return 0;
}