int bowlingScore(const string& input) {
    int score = 0;
    int roll = 0;
    for (char c : input) {
        if (c == '/') {
            if (roll < 2) {
                score += min(10, roll);
            } else {
                score += min(10, roll) + sum(input.substr(input.find('/') - 1));
            }
            roll = 0;
        } else if (isdigit(c)) {
            roll *= 10;
            roll += c - '0';
        }
    }
    return score;
}

int main() {
    // Testing the function with different inputs
    cout << bowlingScore("0") << endl;          // 0
    cout << bowlingScore("XXXXXXXXXXXX") << endl; // 300
    cout << bowlingScore("5/5/5/5/5/5/5/5/5/5/5") << endl; // 150
    cout << bowlingScore("7115XXX548/279-X53") << endl; // 145
    cout << bowlingScore("532/4362X179-41447/5") << endl; // 100

    return 0;
}