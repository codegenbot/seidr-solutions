int scoreOfBowlingRound(string s) {
    int score = 0, frame = 0;
    vector<int> frames(10, 0);
    
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'X') {
            frames[frame] = 10;
            frame++;
        } else if (s[i] == '/') {
            frames[frame] = 10 - frames[frame - 1];
            frame++;
        } else if (s[i] == '-') {
            frames[frame] = 0;
            frame++;
        } else {
            frames[frame] = s[i] - '0';
            if (frame % 2 == 1) {
                if (frames[frame - 1] + frames[frame] == 10) {
                    frames[frame] = 10;
                }
            }
            frame++;
        }
    }
    
    for (int i = 0; i < 10; ++i) {
        score += frames[i];
        if (frames[i] == 10 && i < 9) {
            if (frames[i+1] == 10) {
                score += frames[i+1] + frames[i+2];
            } else {
                score += frames[i+1];
            }
        } else if (frames[i] + frames[i+1] == 10 && i < 9) {
            score += frames[i+1];
        }
    }
    
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << scoreOfBowlingRound(s) << endl;
    return 0;
}