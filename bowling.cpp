int score_of_round(string s) {
    int score = 0, frame = 0, i = 0;
    while (frame < 10 && i < s.size()) {
        if (s[i] == 'X') {
            score += 10;
            if (s[i + 2] == 'X') score += 10;
            else if (s[i + 1] == '/') score += 10;
            else score += s[i + 1] - '0' + s[i + 2] - '0';
            i++;
        } else if (s[i + 1] == '/') {
            score += 10;
            score += s[i + 2] - '0';
        } else {
            score += s[i] - '0' + s[i + 1] - '0';
        }
        frame++;
        i += 2;
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << score_of_round(s) << endl;
    return 0;
}