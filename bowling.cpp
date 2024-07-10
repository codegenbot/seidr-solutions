int get_score(string s) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    vector<int> rolls;

    for (char c : s) {
        if (c == 'X') {
            rolls.push_back(10);
            frame++;
            if (frame > 10)
                break;
        } else if (c == '/') {
            rolls.push_back(10 - rolls.back());
        } else if (c == '-') {
            rolls.push_back(0);
        } else {
            rolls.push_back(c - '0');
        }
    }

    for (int i = 0; i < rolls.size(); i++) {
        if (frame > 10)
            break;

        if (rolls[i] == 10) {
            score += 10 + rolls[i+1] + rolls[i+2];
            ball++;
            frame++;
        } else if (rolls[i] + rolls[i+1] == 10) {
            score += 10 + rolls[i+2];
            i++;
            ball += 2;
            frame++;
        } else {
            score += rolls[i] + rolls[i+1];
            i++;
            ball += 2;
            frame++;
        }
    }

    return score;
}

int main() {
    string s;
    cin >> s;
    cout << get_score(s) << endl;
    
    return 0;
}