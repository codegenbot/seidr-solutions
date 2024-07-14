int bowlingScore(string input) {
    int score = 0;
    int frame = 0;
    string temp;

    for (char c : input) {
        if (c == '/') {
            // Add the first part of the frame to the total score
            if (temp[0] - '0' == 10) {
                score += 10 + (frame < 9 ? getBonus(frame) : 0);
            } else {
                score += temp[0] - '0';
            }
            // Reset the temporary string
            temp.clear();
        } else if (c == 'X') {
            score += 10;
            frame++;
            temp = "";
        } else {
            temp += c;
        }

        frame++;

        if (frame >= 9) {
            // Add the last part of the frame to the total score
            if (temp.size() > 1) {
                int firstRoll = temp[0] - '0';
                int secondRoll = temp[1] - '0';
                if (firstRoll + secondRoll == 10) {
                    score += 10;
                } else {
                    score += firstRoll + secondRoll;
                }
            } else {
                score += temp[0] - '0';
            }
        }
    }

    return score;
}

int getBonus(int frame) {
    if (frame < 9) {
        // Add the bonus for a strike or spare in previous frames
        return 0;
    } else {
        // The last two frames are special cases, they don't count as strikes
        return 0;
    }
}