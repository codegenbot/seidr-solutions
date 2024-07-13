int score(string input) {
    int total_score = 0;
    int frame = 0;
    int bowls[21] = {0};

    for (char c : input) {
        if (c == 'X') {
            bowls[frame] = 10;
            frame++;
        } else if (c == '/') {
            bowls[frame] = 10 - bowls[frame - 1];
            frame++;
        } else if (c == '-') {
            bowls[frame] = 0;
            frame++;
        } else {
            bowls[frame] = c - '0';
            frame++;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (bowls[i*2] == 10) {
            total_score += 10 + bowls[i*2+2] + bowls[i*2+3];
            if (bowls[i*2+2] == 10) {
                total_score += bowls[i*2+4];
            }
        } else if (bowls[i*2] + bowls[i*2+1] == 10) {
            total_score += 10 + bowls[i*2+2];
        } else {
            total_score += bowls[i*2] + bowls[i*2+1];
        }
    }

    return total_score;
}