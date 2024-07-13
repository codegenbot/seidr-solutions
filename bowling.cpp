int bowling(string s) {
    int score = 0;
    int prev_frame_score = 0;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'X') {
            score += 10 + prev_frame_score;
            prev_frame_score = 10;
        } else if(s[i] == '/') {
            int rest = 10 - s[i+1] - s[i+2];
            score += s[i-1] - '0' + prev_frame_score;
            prev_frame_score = rest;
            i++; // skip the '/'
        } else {
            int this_frame_score = s[i] - '0';
            if(prev_frame_score > 0) {
                this_frame_score += prev_frame_score;
                score += this_frame_score;
                prev_frame_score = 0;
            }
        }
    }
    return score;
}