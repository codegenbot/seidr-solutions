int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'X') {
            score += 10 + (frame < 9 ? 10 : 0);
            frame++;
        } else if(s[i] == '/') {
            int prevFrameScore = 0;
            if(i > 1 && s[i-2] == 'X') {
                prevFrameScore = 10;
            } else if(i > 1) {
                for(int j=i-1; j>=i-3; j--) {
                    if(s[j] != '/') {
                        prevFrameScore += (s[j] - '0');
                        break;
                    }
                }
            }
            score += prevFrameScore + (s[i] - '0') + (s[i+1] - '0');
            i++;
            frame++;
        } else {
            int currentFrameScore = 0;
            for(int j=i; s[j] != '/' && j<s.length(); j++) {
                currentFrameScore += (s[j] - '0');
            }
            score += currentFrameScore;
            if(frame < 9) {
                frame++;
            } else {
                i = s.length();
            }
        }
    }
    return score;
}