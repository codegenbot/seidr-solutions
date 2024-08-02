int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '/') {
            frame++;
            score += min(stoi(s.substr(0, i)), 10);
            s = s.substr(i+1);
            i = -1;
        }
    }
    while(frame < 10) {
        int pins = 0;
        for(int j=i+1; j<s.length(); j++) {
            if(s[j] != 'X') {
                pins += (s[j]-48);
                i = j-1;
                break;
            } else {
                pins += 10;
                i = j;
            }
        }
        score += pins;
        frame++;
    }
    return score;
}