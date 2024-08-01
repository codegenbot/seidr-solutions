int bowlingScore(const string& rolls) {
    int score = 0;
    int rollIndex = 0;

    for (int frame = 1; frame <= 10; ++frame) {
        if (frame == 10) { // Last frame, two or three rolls
            int firstRoll =stoi(rolls.substr(rollIndex, 1));
            if (firstRoll < 5) { // Spare
                score += firstRoll + 10;
                rollIndex++;
            } else { // Strike
                score += 10;
                rollIndex++;
            }
            score += stoi(rolls.substr(rollIndex++, 1)) + stoi(rolls.substr(rollIndex, 1));
        } else { // Not the last frame, one or two rolls per frame
            if (stoi(rolls.substr(rollIndex, 1)) < 5) { // Spare
                score += stoi(rolls.substr(rollIndex++, 1));
                rollIndex++;
                score += 10;
            } else {
                score += stoi(rolls.substr(rollIndex, 2));
                rollIndex += 2;
            }
        }
    }

    return score;
}