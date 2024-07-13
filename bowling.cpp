int score(string s) {
    int res = 0;
    int frame = 0;
    int rolls[21] = {0};
    
    for (char c : s) {
        if (c == 'X') {
            rolls[frame++] = 10;
        } else if (c == '/') {
            rolls[frame - 1] = 10 - rolls[frame - 2];
        } else if (c == '-') {
            rolls[frame++] = 0;
        } else {
            rolls[frame++] = c - '0';
        }
    }
    
    for (int i = 0; i < 10; ++i) {
        if (rolls[i * 2] == 10) {
            res += 10 + rolls[i * 2 + 1] + rolls[i * 2 + 2];
            if (rolls[i * 2 + 2] == 10) {
                res += rolls[i * 2 + 4];
            }
        } else if (rolls[i * 2] + rolls[i * 2 + 1] == 10) {
            res += 10 + rolls[i * 2 + 2];
        } else {
            res += rolls[i * 2] + rolls[i * 2 + 1];
        }
    }
    
    return res;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}