int get_score(const char* bowls) {
    int score = 0;
    char prev_ball = ' ';
    for (int i = 0; i < strlen(bowls); i++) {
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
            score += bowls[i] - '0';
            prev_ball = bowls[i];
        }
        
        // Check for strike and spare cases
        if (prev_ball == 'X' && bowls[i] != 'X') {
            if (bowls[i] == '/') {
                score += 10;
            } else {
                score -= 5;
            }
        } else if (prev_ball == '/' && bowls[i] != '/') {
            score -= 5;
        }
    }
    return score;
}