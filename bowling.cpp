int score(string s) {
    int frame = 0, score = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 10;
            score += (s[frame + 1] == 'X') ? 10 : (s[frame + 1] == '/') ? 10 - s[frame + 2] + '0' : s[frame + 1] - '0';
            score += (s[frame + 2] == 'X') ? 10 : ((frame == 18) ? (s[frame + 2] == '/' ? 10 - s[frame + 3] + '0' : s[frame + 2] - '0') : 0);
            frame++;
        } else if (c == '/') {
            score += 10 - s[frame - 1] + '0';
        } else {
            score += c - '0';
        }
        frame++;
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}