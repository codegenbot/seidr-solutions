int calculateScore(const string& bowls) {
    int score = 0;
    for (int i = 0; i < bowls.size(); i++) {
        if (bowls[i] == 'X') {
            score += 10;
        } else if (isdigit(bowls[i])) {
            string str(1, bowls[i]);
            score += stoi(str);
        }
    }
    return score;
}