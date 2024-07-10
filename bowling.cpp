int score(string s) {
    int total = 0;
    int frame = 1;
    int ball = 0;
    int frames[10] = {0};
    
    for (char c : s) {
        if (c == 'X') {
            frames[frame-1] = 10;
            frame++;
        } else if (c == '/') {
            frames[frame-1] = 10 - frames[frame-1];
            frame++;
            ball = 0;
        } else if (c == '-') {
            ball++;
        } else {
            frames[frame-1] += c - '0';
            ball++;
            if (ball == 2) {
                frame++;
                ball = 0;
            }
        }
    }
    
    for (int i = 0; i < 10; i++) {
        total += frames[i];
    }
    
    return total;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}