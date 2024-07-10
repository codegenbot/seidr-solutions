int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    bool firstRoll = true;

    for (char c : s) {
        if (c == 'X') { // strike
            score += 10 + nextTwoRolls(s);
            currentRoll = 0;
            firstRoll = true;
        } else if (c == '/') { // spare
            score += 10 - currentRoll;
            currentRoll = 0;
            firstRoll = false;
        } else {
            currentRoll++;
            if (!firstRoll) {
                if (currentRoll == 2) {
                    score += 10 - currentRoll;
                    currentRoll = 0;
                    firstRoll = true;
                }
            }
        }
    }

    return score;
}

int nextTwoRolls(string s) {
    int i = s.size() - 1;
    while (i >= 0 && !isdigit(s[i])) i--;
    if (i < 0) return 10;

    string str = "";
    while (i >= 0 && isdigit(s[i])) {
        str.push_back(s[i]);
        i--;
    }
    reverse(str.begin(), str.end());
    int val1 = stoi(str);
    str.clear();
    i--;
    while (i >= 0 && isdigit(s[i])) {
        str.push_back(s[i]);
        i--;
    }
    reverse(str.begin(), str.end());
    int val2 = stoi(str);

    return val1 + val2;
}