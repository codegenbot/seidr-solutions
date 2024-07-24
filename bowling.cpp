int score(string s) {
    int frames[11] = {0};
    int frame = 0, score = 0, rolls = 0;

    for (char c : s) {
        if (c == 'X') {
            score += 10;
            frames[frame] = 10 + (rolls < 2 ? frames[frame+1] : frames[frame+2]);
            frame++;
            rolls = 0;
        } else if (c == '/') {
            score += 10 - (s[rolls-1] - '0');
            frames[frame] = 10 + (rolls < 2 ? frames[frame+1] : 0);
            frame++;
            rolls = 0;
        } else if (c == '-') {
            rolls++;
        } else {
            score += c - '0';
            frames[frame] += c - '0';
            if (rolls == 1) {
                score += c - '0';
                frames[frame] += c - '0';
                rolls = 0;
                frame++;
            } else {
                rolls++;
            }
        }
    }

    return score;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}