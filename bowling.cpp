int main() {
    string input;
    cin >> input;
    
    int score = 0;
    int frame = 0;
    int rolls = 0;

    for (char c : input) {
        rolls++;
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                score += (rolls < 19) ? ((input[rolls] == 'X') ? 10 : (isdigit(input[rolls]) ? input[rolls] - '0' : 10)) : (isdigit(input[rolls]) ? input[rolls] - '0' : 10);
                score += (rolls < 18) ? ((input[rolls + 1] == 'X') ? 10 : (isdigit(input[rolls + 1]) ? input[rolls + 1] - '0' : 10)) : (isdigit(input[rolls + 1]) ? input[rolls + 1] - '0' : 10);
                frame++;
                rolls++;
            }
        } else if (isdigit(c)) {
            score += c - '0';
            if (frame < 10) {
                if (rolls % 2 == 0 || c == '0') {
                    score += (c == '/') ? (10 - (input[rolls - 1] - '0')) : 0;
                    frame++;
                }
            }
        } else if (c == '/') {
            score += 10 - (input[rolls - 1] - '0');
        }
    }

    cout << score << endl;

    return 0;
}