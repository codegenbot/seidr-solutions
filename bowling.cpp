int scoreOfBowlingGame(string s) {
    int total = 0;
    for (int i = 0; i < 10; ++i) {
        if (s[i] == '/') {
            total += 10;
        } else {
            int thisRoll = 0;
            for (int j = i; j < i + 2 && j < s.size(); ++j) {
                thisRoll *= 10;
                thisRoll += s[j] - '0';
            }
            total += thisRoll;
            if (thisRoll == 10) {
                i++;
            }
        }
    }
    return total;
}