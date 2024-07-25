int solve(string input) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    map<char, int> value = {{'X', 10}, {'/', 10}, {'-', 0}};
    
    for (char c : input) {
        if (isdigit(c)) {
            score += c - '0';
            ball++;
        } else {
            score += value[c];
            if (value[c] == 10 || ball == 2) {
                ball = 0;
                frame++;
            } else {
                ball++;
            }
        }
        if (frame > 10) break;
    }
    
    return score;
}

int main() {
    string input;
    cin >> input;
    cout << solve(input) << endl;
    return 0;
}