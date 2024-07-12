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
            if (s[i + 1] == '/') {
                rolls[frame] = 10 - rolls[frame];
                frame++;
            }
        }
    }

    frame = 0;
    for (int i = 0; i < 10; i++) {
        if (rolls[frame] == 10) {
            total += 10 + rolls[frame + 1] + rolls[frame + 2];
            frame++;
        } else if (rolls[frame] + rolls[frame + 1] == 10) {
            total += 10 + rolls[frame + 2];
            frame += 2;
        } else {
            total += rolls[frame] + rolls[frame + 1];
            frame += 2;
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