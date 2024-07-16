int bowlingScore(string s) {
    int score = 0, frame = 0, ball = 0;
    vector<int> frames(10, 0);
    
    for (char c : s) {
        if (c == 'X') {
            frames[frame++] = 10;
        } else if (c == '/') {
            frames[frame++] = 10 - frames[frame - 1];
        } else if (c == '-') {
            frames[frame++] = 0;
        } else {
            frames[frame] += c - '0';
            if (++ball % 2 == 0) {
                frame++;
            }
        }
    }
    
    for (int i = 0; i < 10; i++) {
        score += frames[i];
        if (frames[i] == 10 && i < 9) {
            score += frames[i + 1] + (frames[i + 2] == 10 ? frames[i + 2] : frames[i + 1]);
        } else if (frames[i] + frames[i + 1] == 10 && i < 9) {
            score += frames[i + 2];
        }
    }
    
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << bowlingScore(s) << endl;
    return 0;
}