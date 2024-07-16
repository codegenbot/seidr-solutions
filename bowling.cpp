int main() {
    string input;
    cin >> input;
    
    int score = 0;
    int frame = 0;
    vector<int> frames(10, 0);
    
    for (char c : input) {
        if (c == 'X') {
            frames[frame] = 10;
            frame++;
        } else if (c == '/') {
            frames[frame] = 10 - frames[frame - 1];
            frame++;
        } else if (c == '-') {
            frames[frame] = 0;
            frame++;
        } else {
            frames[frame] = c - '0';
            frame++;
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
    
    cout << score << endl;
    
    return 0;
}