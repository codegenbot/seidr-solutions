int bowlingScore(string frames) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    int remaining_pins = 10;
    bool first_try = true;
    
    for (char c : frames) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                score += (frames[ball + 1] == 'X') ? 10 : (frames[ball + 1] - '0');
                score += (frames[ball + 2] == 'X') ? 10 : (frames[ball + 2] == '/' ? 10 - (frames[ball + 1] - '0') : (frames[ball + 2] - '0'));
            }
            frame++;
            ball++;
        } else if (c == '/') {
            score += 10 - (frames[ball - 1] - '0');
            score += (frames[ball + 1] == 'X') ? 10 : (frames[ball + 1] - '0');
            frame++;
            ball += 2;
        } else {
            score += (c == '-') ? 0 : (c - '0');
            if (first_try) {
                remaining_pins -= (c == '-') ? 0 : (c - '0');
                if (c != '-') first_try = false;
            } else {
                remaining_pins -= (c == '/') ? remaining_pins : (c - '0');
                if (frame < 10 && remaining_pins == 0) {
                    first_try = true;
                    remaining_pins = 10;
                    frame++;
                }
            }
            ball++;
        }
    }
    
    return score;
}

int main() {
    string frames;
    cin >> frames;
    cout << bowlingScore(frames) << endl;
    return 0;
}