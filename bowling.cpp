int score(string s) {
    int total = 0;
    int frame = 1;
    int ball = 0;
    int rolls[21];
    
    for (char c : s) {
        if (c == 'X') {
            rolls[ball++] = 10;
            if (frame < 10) frame++;
        } else if (c == '/') {
            rolls[ball-1] = 10 - rolls[ball-1];
            rolls[ball++] = 0;
            if (frame < 10) frame++;
        } else if (c == '-') {
            rolls[ball++] = 0;
            if (frame < 10) frame++;
        } else {
            rolls[ball++] = c - '0';
            if (frame < 10) {
                if (++ball % 2 == 0) frame++;
            }
        }
    }
    
    int i = 0;
    for (int f = 0; f < 10; f++) {
        if (rolls[i] == 10) {
            total += 10 + rolls[i+1] + rolls[i+2];
            i++;
        } else if (rolls[i] + rolls[i+1] == 10) {
            total += 10 + rolls[i+2];
            i += 2;
        } else {
            total += rolls[i] + rolls[i+1];
            i += 2;
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