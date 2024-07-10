int bowlingScore(string frames) {
    int score = 0;
    int currentFrameRolls = 0;

    for (int i = 0; i < frames.size(); ++i) {
        if (frames[i] == 'X') { // strike
            score += 10 + getExtraFrames(frames, i);
            currentFrameRolls = 2;
        } else if (frames[i] == '/') { // spare
            score += 5 + getExtraFrames(frames, i+1);
            currentFrameRolls = 2;
        } else { // normal roll
            int rollsThisFrame = frames[i] - '0';
            score += rollsThisFrame;
            currentFrameRolls++;
            if (currentFrameRolls == 2) {
                if (i + 2 < frames.size() && frames[i+1] != '/') {
                    score += frames[i+1] - '0';
                }
            }
        }
    }

    return score;
}

int getExtraFrames(string frames, int start) {
    int extraRolls = 0;
    for (int i = start; i < frames.size(); ++i) {
        if (frames[i] == 'X') { // strike
            extraRolls += 10 + getExtraFrames(frames, i+1);
            break;
        } else if (frames[i] == '/') { // spare
            extraRolls += 5 + getExtraFrames(frames, i+2);
            break;
        } else {
            int rollsThisFrame = frames[i] - '0';
            extraRolls += rollsThisFrame;
            if (i+1 < frames.size() && frames[i+1] != '/') {
                extraRolls++;
            }
            if (extraRolls >= 3) {
                break;
            }
        }
    }

    return extraRolls;
}