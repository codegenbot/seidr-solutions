int bowlingScore(string s) {
    int score = 0;
    bool firstInFrame = true;
    int frameScore = 0;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '/') {
            if(firstInFrame) {
                frameScore += (i - 1 + 1);
                firstInFrame = false;
            }
            else {
                score += min(10, (int)(s.substr(i-1,2)-48)) * 10;
                firstInFrame = true;
                i++;
            }
        }
    }

    if(firstInFrame) {
        frameScore += (int)(s.back()-48);
    }
    else {
        score += min(10, (int)(s[s.length()-1]-48)) + frameScore;
    }

    return score;
}