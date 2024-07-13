int score(string input) {
    int total = 0;
    int frame = 0;
    int frameIndex = 0;
    vector<int> frames(10, 0);
    
    for (char c : input) {
        if (c == 'X') {
            frames[frame] = 10;
            frame++;
        } else if (c == '/') {
            frames[frame] = 10 - frames[frame-1];
            frame++;
        } else if (c == '-') {
            frames[frame] = 0;
            frame++;
        } else {
            frames[frame] += c - '0';
            if (frames[frame] == 10) {
                frame++;
            }
        }
    }
    
    for (int i = 0; i < 10; i++) {
        total += frames[i];
    }
    
    return total;
}

int main() {
    string input;
    cin >> input;
    cout << score(input) << endl;
    return 0;
}