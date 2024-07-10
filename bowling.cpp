int bowlingScore(string input) {
    int score = 0;
    int roll1, roll2, frame = 0;

    for (char c : input) {
        if (c == '/') {
            // If there's a slash, it means we're not scoring full frames in this turn
            // So, just add the two rolls to the total score
            if (roll1 + roll2 >= 10) {
                score += 10;
            } else {
                score += roll1 + roll2;
            }
            frame++;
        } else {
            // If it's not a slash, we're scoring full frames in this turn
            if (c == 'X') {
                // Strike! Add 10 points for the strike and move on to the next frame
                score += 10;
                frame++;
            } else if (isdigit(c)) {
                roll1 = c - '0';
                if (frame < 9) {
                    // If it's not the last turn, we might get two more rolls in this frame
                    if (c == '5') {
                        // We got a spare! Add 10 points for the spare and move on to the next frame
                        score += 10;
                        frame++;
                    } else {
                        // Just add the roll and wait for the second roll
                        roll2 = c - '0';
                    }
                } else {
                    // It's the last turn, just add the roll to the total score
                    if (c == '5') {
                        // We got a spare in the last frame! Add 10 points for the spare
                        score += 10;
                    } else {
                        // Just add the roll to the total score
                        score += c - '0';
                    }
                }
            }
        }
    }

    return score;
}