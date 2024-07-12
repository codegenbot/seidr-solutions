int score(string s) {
    int total = 0;
    int frame = 0;
    int rolls[21] = {0};

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            rolls[frame] = 10;
            frame++;
        } else if (s[i] == '/') {
            rolls[frame] = 10 - rolls[frame - 1];
            frame++;
        } else if (s[i] == '-') {
            rolls[frame] = 0;
            frame++;
        } else {
            rolls[frame] = s[i] - '0';
            if (frame % 2 == 1) {
                if (rolls[frame] + rolls[frame - 1] == 10) {
                    total += rolls[frame + 1];
                }
            }
            frame++;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (rolls[i * 2] == 10) {
            total += 10 + rolls[i * 2 + 1] + rolls[i * 2 + 2];
        } else if (rolls[i * 2] + rolls[i * 2 + 1] == 10) {
            total += 10 + rolls[i * 2 + 2];
        } else {
            total += rolls[i * 2] + rolls[i * 2 + 1];
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