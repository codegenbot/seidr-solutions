int get_score(const char *bowls) {
    int score = 0;
    for (int i = 0; i < strlen(bowls); i++) {
        if (bowls[i] == 'X') {
            score += 30;
        } else if (bowls[i] == '/') {
            score += 20;
        } else {
            score += bowls[i] - '0';
        }
    }
    return score;
}