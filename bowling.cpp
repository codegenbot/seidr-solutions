int score(string s) {
    int frames[10] = {0};
    int frameIndex = 0;
    int score = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            frames[frameIndex++] = 10;
        } else if (s[i] == '/') {
            frames[frameIndex++] = 10 - frames[frameIndex - 1];
        } else if (s[i] == '-') {
            frames[frameIndex++] = 0;
        } else {
            frames[frameIndex++] = s[i] - '0';
        }
    }

    for (int i = 0; i < 10; i++) {
        if (frames[i] == 10) {
            score += 10 + frames[i + 1] + frames[i + 2];
        } else if (frames[i] + frames[i + 1] == 10) {
            score += 10 + frames[i + 2];
            i++;
        } else {
            score += frames[i] + frames[i + 1];
            i++;
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