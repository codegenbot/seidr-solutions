int main() {
    string input;
    cin >> input;
    int score = 0;
    int frame = 0;
    int rolls = 0;
    vector<int> frames(10, 0);
    
    for (char c : input) {
        if (c == 'X') {
            frames[frame++] = 10;
            if (frame == 10) break;
        } else if (c == '/') {
            frames[frame++] = 10 - frames[frame - 1];
            if (frame == 10) break;
            rolls++;
        } else if (c == '-') {
            frames[frame++] = 0;
            if (frame == 10) break;
        } else {
            frames[frame] += c - '0';
            if (++rolls % 2 == 0) frame++;
        }
    }
    
    for (int i = 0; i < 10; i++) {
        score += frames[i];
        if (frames[i] == 10 && i < 9) {
            score += frames[i + 1];
            if (frames[i + 1] == 10) score += frames[i + 2];
        } else if (frames[i] == 10 && i == 9) {
            score += frames[i + 1] + frames[i + 2];
        } else if (frames[i] + frames[i + 1] == 10) {
            score += frames[i + 1];
        }
    }
    
    cout << score << endl;
    
    return 0;
}