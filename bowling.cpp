int calculateScore(string input) {
    int score = 0;
    int frames = 10;
    int rolls = 0;
    for (int i = 0; i < input.size(); i++) {
        if (rolls >= frames * 2) {
            break;
        }
        if (input[i] == 'X') {
            score += 10;
            if (rolls % 2 == 0 && rolls < frames * 2 - 2) {
                score += (input[i + 1] == 'X') ? 10 + ((input[i + 2] == 'X') ? 10 : (isdigit(input[i + 2]) ? input[i + 2] - '0' : 0)) : (input[i + 1] == '/' ? 10 : (isdigit(input[i + 1]) ? input[i + 1] - '0' : 0));
            }
            rolls++;
        } else if (input[i] == '/') {
            score += 10 - (isdigit(input[i - 1]) ? input[i - 1] - '0' : 0);
            score += (isdigit(input[i + 1]) ? input[i + 1] - '0' : 0);
            rolls += 2;
        } else if (isdigit(input[i])) {
            score += input[i] - '0';
            rolls++;
        }
    }
    return score;
}

int main() {
    string input;
    cin >> input;
    cout << calculateScore(input) << endl;
    return 0;
}