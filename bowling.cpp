int getScore(string str) {
    int score = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'X') {
            score += 10;
        } else if (str[i] == '/') {
            score += 5;
        } else if (str[i] == '-') {
            score -= 5;
        } else {
            score += stoi(str.substr(i, 2));
            i++;
        }
    }
    return score;
}