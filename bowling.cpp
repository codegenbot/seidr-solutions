int main() {
    string input;
    cin >> input;

    int score = 0;
    int frame = 0;
    int rolls = 0;
    for(char c : input) {
        rolls++;
        if(c == 'X') {
            score += 10;
            if(frame < 9) {
                score += (input[rolls] == 'X') ? 10 + ((input[rolls+1] == 'X') ? 10 : (input[rolls+1] - '0')) : ((input[rolls+1] == '/') ? 10 : (input[rolls] - '0' + input[rolls+1] - '0'));
            }
            frame++;
        } else if(c == '/') {
            score += 10 - (input[rolls-2] - '0');
            if(frame < 9) {
                score += (input[rolls] == 'X') ? 10 : (input[rolls] - '0');
            }
            frame++;
        } else if(c >= '1' && c <= '9') {
            score += c - '0';
            if(frame < 9 && rolls % 2 == 0) {
                if(input[rolls+1] == '/') {
                    score += 10 - (c - '0');
                }
                frame++;
            }
        }
    }

    cout << score;

    return 0;
}