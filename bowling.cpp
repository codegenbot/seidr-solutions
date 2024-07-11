int score(string input) {
    int totalScore = 0;
    int frame = 0;

    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 'X') {
            totalScore += 10;
            if (frame < 9) {
                totalScore += (input[i + 1] == 'X') ? 10 : (isdigit(input[i + 1]) ? input[i + 1]-'0' : 10);
                totalScore += (input[i + 2] == 'X') ? 10 : (isdigit(input[i + 2]) ? input[i + 2]-'0' : 10);
                frame++;
            } else if (frame == 9) {
                totalScore += (input[i + 1] == 'X') ? 10 : (isdigit(input[i + 1]) ? input[i + 1]-'0' : 10);
                totalScore += (input[i + 2] == 'X') ? 10 : (isdigit(input[i + 2]) ? input[i + 2]-'0' : 10);
                break;
            }
        } else if (input[i] == '/') {
            totalScore += (10 - (isdigit(input[i - 1]) ? input[i - 1]-'0' : 0));
            totalScore += (isdigit(input[i + 1]) ? input[i + 1]-'0' : 10);
            frame++;
        } else if (isdigit(input[i])) {
            totalScore += input[i]-'0';
            if (isdigit(input[i + 1])) {
                if (input[i] + input[i + 1] - '0' == 10) {
                    totalScore += (isdigit(input[i + 2]) ? input[i + 2]-'0' : 0);
                }
            }
        }
    }

    return totalScore;
}

int main() {
    string input;
    cin >> input;
    cout << score(input) << endl;
    return 0;
}