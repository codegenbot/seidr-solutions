int get_score(const std::string& bowls) {
    int score = 0;
    for (int i = 0; i < bowls.size(); i++) {
        if (bowls[i] == 'X') {
            // Strike, add the next two rolls as well
            score += 10 + bowls[i+1] - '0' + bowls[i+2] - '0';
            i += 2; // Skip the next two rolls
        } else if (bowls[i] == '/') {
            // Spare, add the next roll as well
            score += 5 + bowls[i+1] - '0';
            i++; // Skip the next roll
        } else {
            // Regular roll, just add the current roll
            score += bowls[i] - '0';
        }
    }
    return score;
}