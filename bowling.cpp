int calculateBowlingScore(string input) {
    int score = 0;
    int frame = 1;
    int bowl = 0;
    int rolls = 0;
    vector<int> frames(11, 0);
    
    for (char c : input) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                frames[frame] = 10;
                frames[frame+1] = 10;
            }
            frame++;
        } else if (c == '/') {
            score += 10 - frames[frame];
            frames[frame] = 10;
        } else if (c == '-') {
            frames[frame] = 0;
        } else {
            int pins = c - '0';
            score += pins;
            frames[frame] += pins;
            if (rolls % 2 == 1) {
                frame++;
            }
        }
        rolls++;
    }
    
    return score;
}

int main() {
    string input;
    cin >> input;
    cout << calculateBowlingScore(input) << endl;
    return 0;
}