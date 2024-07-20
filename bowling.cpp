int bowlingScore(string input) {
    int total = 0;
    bool prevStrike = false;
    for (int i = 0; i < 10; i++) {
        if (input[i] == 'X') {
            total += 10 + (prevStrike ? 10 : 0);
            prevStrike = true;
        } else if (input[i] == '/') {
            int firstRoll = input[i - 1] - '0';
            int secondRoll = input[i + 1] - '0';
            total += firstRoll + secondRoll;
            prevStrike = false;
        } else {
            int firstRoll = input[i] - '0';
            if (prevStrike) {
                total += firstRoll;
            } else {
                total += firstRoll + (input[i + 1] == '/' ? 0 : input[i + 1] - '0');
            }
            prevStrike = false;
        }
    }
    return total;
}