int get_score(string bowls) {
    int score = 0;
    char prev_ball = ' ';
    for (int i = 0; i < bowls.size(); i++) {
        if (bowls[i] == 'X') {
            score += 10;
            prev_ball = 'X';
        } else if (bowls[i] == '/') {
            score += 5;
            prev_ball = '/';
        } else if (bowls[i] == '-') {
            score -= 5;
            prev_ball = '-';
        } else {
            score += int(bowls[i]);
            prev_ball = bowls[i];
        }
    }
    return score;
}