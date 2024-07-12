int bowling_score(string s) {
    int score = 0, frame = 0, turn = 0;
    vector<int> frames(10, 0);
    
    for (char c : s) {
        if (c == 'X') {
            frames[frame++] = 10;
            if (frame == 10) break;
        } else if (c == '/') {
            frames[frame++] = 10 - frames[frame - 1];
        } else if (c == '-') {
            frames[frame++] = 0;
        } else {
            frames[frame] += c - '0';
            if (turn % 2 == 1) frame++;
        }
        
        if (frame == 10) break;
        turn++;
    }
    
    for (int i = 0; i < 10; i++) {
        score += frames[i] + (frames[i] == 10 ? frames[i+1] + frames[i+2] : 0);
    }
    
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << bowling_score(s) << endl;
    
    return 0;
}