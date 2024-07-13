int bowlingScore(const string& frames) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < frames.size(); ++i) {
        if (frames[i] == 'X') {
            score += 10;
            if (frame < 9) {
                score += frames[i+1] == 'X' ? 10 : (frames[i+2] == '/' ? 10 : frames[i+1] - '0' + frames[i+2] - '0');
            }
            ++frame;
        } else if (frames[i] == '/') {
            score += 10 - (frames[i-1] - '0');
            score += frames[i+1] == 'X' ? 10 : frames[i+1] - '0';
            ++frame;
        } else if (frames[i] >= '0' && frames[i] <= '9') {
            score += frames[i] - '0';
            if (frames[i+1] == '/') {
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
    cout << bowlingScore(frames) << endl;
    return 0;
}