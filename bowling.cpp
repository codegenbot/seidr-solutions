int score(string frames) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < frames.size() && frame < 10; ++i) {
        if (frames[i] == 'X') {
            score += 10;
            if (frame < 9) {
                if (frames[i + 2] == 'X') {
                    score += 10 + (frames[i + 4] == 'X' ? 10 : frames[i + 4] - '0');
                } else {
                    score += (frames[i + 2] == '/' ? 10 : frames[i + 2] - '0') + (frames[i + 3] == '/' ? 10 : frames[i + 3] == 'X' ? 10 : frames[i + 3] - '0');
                }
            } else {
                score += (frames[i + 1] == 'X' ? 10 : frames[i + 1] - '0') + (frames[i + 2] == 'X' ? 10 : frames[i + 2] - '0');
            }
            ++frame;
        } else if (frames[i] == '/') {
            score += 10 - (frames[i - 1] - '0');
            score += (frames[i + 1] == 'X' ? 10 : frames[i + 1] - '0');
            ++frame;
            ++i;
        } else {
            score += frames[i] - '0';
            if (i + 1 < frames.size() && frames[i + 1] == '/') {
                score += 10 - (frames[i] - '0');
            }
            ++frame;
        }
    }
    return score;
}

int main() {
    string frames;
    cin >> frames;
    cout << score(frames) << endl;
    return 0;
}