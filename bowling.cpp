int get_score(const std::string& bowls) {
    int score = 0;
    for (int i = 0; i < bowls.size(); i++) {
        if (bowls[i] == 'X') {
            // Strike, add 10 to the score and skip the next two rolls
            score += 10;
            i += 2;
        } else if (bowls[i] == '/') {
            // Spare, add 5 to the score and skip the next roll
            score += 5;
            i++;
        } else if (bowls[i] == '-') {
            // Miss, subtract 5 from the score
            score -= 5;
        } else {
            // Regular roll, add the value to the score
            score += bowls[i] - '0';
        }
    }
    return score;
}