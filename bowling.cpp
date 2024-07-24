int score(const string& input) {
    int totalScore = 0;
    int frame = 0;
    int rolls = 0;

    for (char c : input) {
        if (c == 'X') {
            totalScore += 10;
            if (frame < 9) {
                totalScore += (input[rolls + 1] == 'X') ? 10 : (isdigit(input[rolls + 1]) ? input[rolls + 1] - '0' : 10);
                totalScore += (input[rolls + 2] == 'X') ? 10 : (input[rolls + 2] == '/' ? 10 - (input[rolls + 1] - '0') : (isdigit(input[rolls + 2]) ? input[rolls + 2] - '0' : 10));
            }
            rolls++;
        } else if (c == '/') {
            totalScore += 10 - (input[rolls - 1] - '0');
            totalScore += (input[rolls + 1] == 'X') ? 10 : (isdigit(input[rolls + 1]) ? input[rolls + 1] - '0' : 10);
            if (frame == 9) break;
            rolls += 2;
        } else if (isdigit(c)) {
            totalScore += c - '0';
            if (frame == 9) break;
            rolls++;
        }
        if (c != 'X') rolls++;
        if (rolls % 2 == 0) frame++;
    }

    return totalScore;
}

int main() {
    string input;
    cin >> input;
    cout << score(input) << endl;
    return 0;
}