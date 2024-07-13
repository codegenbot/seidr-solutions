int score(string s) {
    int total = 0;
    int frame = 0;
    vector<int> frames(10, 0);
    
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'X') {
            frames[frame] = 10;
            frame++;
        } else if (s[i] == '/') {
            frames[frame] = 10 - frames[frame-1];
            frame++;
        } else if (s[i] == '-') {
            frames[frame] = 0;
            frame++;
        } else {
            frames[frame] = s[i] - '0';
            if (frame % 2 == 1) {
                if (frames[frame-1] + frames[frame] == 10) {
                    frames[frame] = 10 - frames[frame-1];
                }
                frame++;
            }
        }
    }
    
    for (int i = 0; i < 10; ++i) {
        total += frames[i];
        if (frames[i] == 10) {
            if (i < 9) {
                total += frames[i+1];
                if (frames[i+1] == 10) {
                    total += frames[i+2];
                }
            }
        } else if (frames[i-1] + frames[i] == 10) {
            if (i < 9) {
                total += frames[i+1];
            }
        }
    }
    
    return total;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}