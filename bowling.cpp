int bowlingScore(const string& frames) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < frames.size(); ++i) {
        if (frames[i] == 'X') {
            score += 10;
            if (frames[i + 2] == '/')
                score += 10;
            else {
                if (frames[i + 1] == 'X')
                    score += 10;
                else
                    score += frames[i + 1] - '0';
                if (frames[i + 2] == 'X')
                    score += 10;
                else
                    score += frames[i + 2] - '0';
            }
            frame++;
        } else if (frames[i] == '/') {
            score += 10 - (frames[i - 1] - '0');
            if (frames[i + 1] == 'X')
                score += 10;
            else
                score += frames[i + 1] - '0';
            frame++;
        } else {
            score += frames[i] - '0';
            if (frames[i] == '-')
                score = score;
            else if (frames[i] == '7' && frames[i + 1] == 'X')
                score += 10;
            else if (frames[i] == '7' && frames[i + 1] == '-')
                score = score;
            else if (frames[i] == 'X')
                frame++;
        }
        if (frame == 10)
            break;
    }
    return score;
}

int main() {
    string frames;
    cin >> frames;
    cout << bowlingScore(frames) << endl;
    return 0;
}