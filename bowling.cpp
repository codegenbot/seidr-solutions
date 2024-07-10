int bowlingScore(string str) {
    int score = 0;
    int frame = 1;
    for (char c : str) {
        if (c == 'X') { // Strike
            score += 10 + 10 + 10;
            frame++;
        } else if (c == '/') { // Spare
            score += 10 + 5;
            frame++;
        } else { // Normal roll
            int roll = c - '0';
            score += roll;
            if (frame < 9) {
                if (str[frame] == 'X') { // Next frame is a strike
                    score += 10 + 10;
                    frame++;
                } else if (str[frame] == '/') { // Next frame is a spare
                    score += 5 + 5;
                    frame++;
                }
            }
        }
    }
    return score;
}