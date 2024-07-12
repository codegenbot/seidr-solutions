int main() {
    string input;
    cin >> input;
    
    int score = 0;
    int frame = 1;
    int rolls = 0;
    
    for (char c : input) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                score += (input[rolls + 1] == 'X' ? 10 : (isdigit(input[rolls + 1]) ? input[rolls + 1] - '0' : 10));
                score += (input[rolls + 2] == 'X' ? 10 : (input[rolls + 2] == '/' ? 10 - (input[rolls + 1] == 'X' ? 10 : (isdigit(input[rolls + 1]) ? input[rolls + 1] - '0' : 10)) : (isdigit(input[rolls + 2]) ? input[rolls + 2] - '0' : 10)));
                rolls++;
            }
            frame++;
        } else if (isdigit(c)) {
            score += c - '0';
            if (frame < 10) {
                if (isdigit(input[rolls + 1])) {
                    score += input[rolls + 1] - '0';
                } else if (input[rolls + 1] == '/') {
                    score += 10 - (c - '0');
                }
                rolls++;
            }
            frame++;
        } else if (c == '/') {
            score += 10 - (input[rolls - 1] - '0');
            if (frame < 10) {
                if (isdigit(input[rolls + 1])) {
                    score += input[rolls + 1] - '0';
                } else if (input[rolls + 1] == 'X') {
                    score += 10;
                }
                rolls++;
            }
            frame++;
        }
        rolls++;
    }
    
    cout << score << endl;
    
    return 0;
}