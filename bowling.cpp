int get_score(const std::string& bowls) {
    int score = 0;
    char prev_ball = ' ';
    for (int i = 0; i < bowls.size(); i++) {
        if (bowls.at(i) == 'X') {
            score += 10;
            prev_ball = 'X';
        } else if (bowls.at(i) == '/') {
            score += 5;
            prev_ball = '/';
        } else if (bowls.at(i) == '-') {
            score -= 5;
            prev_ball = '-';
        } else {
            score += bowls.at(i) - '0';
            prev_ball = bowls.at(i);
        }
    }
    return score;
}