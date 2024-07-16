int bowlingScore(string str) {
    int score = 0;
    int roll = 0;
    string temp;

    for (char c : str) {
        if (c == '/') {
            if (roll < 2) {
                score += 10 - (stoi(temp) + stoi(roll == 1 ? "00" : "0"));
            }
            roll = 0;
            temp.clear();
        } else {
            temp += c;
            roll++;
        }
    }

    if (roll > 1) {
        score += stoi(temp) * 2;
    } else if (roll == 1) {
        score += stoi(temp);
    }

    return score;
}