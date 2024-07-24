int score(string input) {
    int total_score = 0;
    int frame = 1;
    int rolls = 0;
    for (int i = 0; i < input.size(); i++) {
        if (frame > 10) break;
        if (input[i] == 'X') {
            total_score += 10;
            if (frame < 10) {
                total_score += (input[i+2] == 'X') ? 10 : (input[i+2] == '/') ? 10 - (input[i+1]-'0') : input[i+1] - '0';
                total_score += (input[i+4] == 'X') ? 10 : (input[i+4] == '/') ? 10 - (input[i+3]-'0') : input[i+3] - '0';
                i++;
            } else if (frame == 10) {
                total_score += (input[i+2] == 'X') ? 10 : (input[i+2] == '/') ? 10 - (input[i+1]-'0') : input[i+1] - '0';
                total_score += (input[i+4] == 'X') ? 10 : (input[i+4] == '/') ? 10 - (input[i+3]-'0') : input[i+3] - '0';
                total_score += (input[i+6] == 'X') ? 10 : (input[i+6] == '/') ? 10 - (input[i+5]-'0') : input[i+5] - '0';
            }
            rolls = 0;
            frame++;
        } else if (input[i] == '/') {
            total_score += 10 - (input[i-1] - '0');
            total_score += (input[i+1] == 'X') ? 10 : input[i+1] - '0';
            rolls = 0;
            frame++;
        } else {
            total_score += input[i] - '0';
            rolls++;
            if (rolls == 2) {
                rolls = 0;
                frame++;
            }
        }
    }
    return total_score;
}

int main() {
    string input;
    cin >> input;
    cout << score(input) << endl;
    return 0;
}