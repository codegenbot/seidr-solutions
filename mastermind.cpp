int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    for (char c : code) {
        int index = guess.find(c);
        while (index != string::npos) {
            if (c == guess[index]) {
                count++;
            }
            index = guess.find(c, index + 1);
        }
    }
    return count - whitePegs(code, guess);
}

int main() {
    string code;
    string guess;
    cout << "Enter the Mastermind code: ";
    cin >> code;
    cout << "Enter a guess: ";
    cin >> guess;
    int black = blackPegs(code, guess);
    int white = 4 - black;
    cout << white << endl;
    cout << black << endl;
    return 0;
}