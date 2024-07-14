int bowlingScore(string frames) {
    int score = 0;
    for(int i = 0; i < 10; i++) {
        if(frames[i] == 'X') { // strike
            score += 10 + bowlingForNextTwoFrames(frames.substr(i+1));
            i++; i++;
        } else if(frames[i] == '/') { // spare
            score += 10 + frames[i+1] - '0';
            i++;
        } else {
            int first = frames[i] - '0';
            int second = frames[i+1] - '0';
            if(first + second >= 10) { // next two are not enough for strike
                score += first + second;
                i++;
            } else {
                score += first + second;
                i++;
            }
        }
    }
    return score;
}

int bowlingForNextTwoFrames(string frames) {
    int score = 0;
    for(int i = 0; i < 2; i++) {
        if(frames[i] == 'X') { // strike
            score += 10 + bowlingForNextOneFrame(frames.substr(i+1));
            i++; i++;
        } else if(frames[i] == '/') { // spare
            score += 10 - (frames[i] - '0');
            i++;
        } else {
            int one = frames[i] - '0';
            int two = frames[i+1] - '0';
            score += one + two;
            i++;
        }
    }
    return score;
}

int bowlingForNextOneFrame(string frames) {
    if(frames[0] == 'X') { // strike
        return 10;
    } else if(frames[0] == '/') { // spare
        return 10 - (frames[0] - '0');
    } else {
        int one = frames[0] - '0';
        int two = frames[1] - '0';
        return one + two;
    }
}