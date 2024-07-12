int score(string s) {
    int frames = 10, score = 0, frameIndex = 0;
    for (int i = 0; i < frames; i++) {
        if (s[frameIndex] == 'X') {
            score += 10 + (s[frameIndex + 1] == 'X' ? 10 : (isdigit(s[frameIndex + 1]) ? s[frameIndex + 1] - '0' : 10));
            if (s[frameIndex + 1] == 'X' && s[frameIndex + 2] == 'X')
                score += 10;
            else if (s[frameIndex + 1] == 'X')
                score += (isdigit(s[frameIndex + 2]) ? s[frameIndex + 2] - '0' : 10);
            frameIndex++;
        } else if (s[frameIndex + 1] == '/') {
            score += 10 + (s[frameIndex + 2] == 'X' ? 10 : (isdigit(s[frameIndex + 2]) ? s[frameIndex + 2] - '0' : 10));
            frameIndex += 2;
        } else {
            score += (isdigit(s[frameIndex]) ? s[frameIndex] - '0' : 0) + (isdigit(s[frameIndex + 1]) ? s[frameIndex + 1] - '0' : 0);
            frameIndex += 2;
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