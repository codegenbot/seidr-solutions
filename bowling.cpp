int bowlingScore(string bowls) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (bowls[i] == '/') {
            // If it's a split, add the points from the split
            int split1 = std::stoi(bowls.substr(i - 1, 1));
            int split2 = std::stoi(bowls.substr(i + 1, 1));
            score += split1 + split2;
        } else {
            // If it's not a split, add the points from that frame
            int framePoints = 10 * (bowls[i] - '0');
            if (i < 8 && bowls[i+1] != '/') {
                // If there are more balls in this frame, add them to the score
                framePoints += std::stoi(bowls.substr(i + 2, 2)) - 10;
            }
            score += framePoints;
        }
    }
    return score;
}