int score(string input) {
    int total = 0;
    int frame = 0;
    int rolls[22]; // 21 rolls and 1 extra for a possible last roll
    int i = 0;
    while (i < input.size()) {
        if (input[i] == 'X') {
            rolls[frame] = 10;
            rolls[frame + 1] = 0;
            frame += 2;
        } else if (input[i] == '/') {
            rolls[frame] = 10 - rolls[frame - 1];
            frame++;
        } else if (input[i] == '-') {
            rolls[frame] = 0;
            frame++;
        } else {
            rolls[frame] = input[i] - '0';
            frame++;
        }
        i++;
    }
    for (int f = 0; f < 10; f++) {
        if (rolls[f * 2] == 10) {
            total += 10 + rolls[f * 2 + 2] + rolls[f * 2 + 3];
            if (rolls[f * 2 + 2] == 10) {
                total += rolls[f * 2 + 4];
            }
        } else if (rolls[f * 2] + rolls[f * 2 + 1] == 10) {
            total += 10 + rolls[f * 2 + 2];
        } else {
            total += rolls[f * 2] + rolls[f * 2 + 1];
        }
    }
    return total;
}

int main() {
    string input;
    cin >> input;
    cout << score(input) << endl;
    return 0;
}