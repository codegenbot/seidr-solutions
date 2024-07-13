int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '/') {
            score += 10 - (10 - stoi(s.substr(i-1,i-1))) ;
            i++;
        } else if(s[i] == 'X') {
            score += 10 + (10 - (10 - stoi(s.substr(0, i))) );
            break;
        } else {
            roll1 = stoi(s.substr(i-1,1));
            roll2 = stoi(s.substr(i,1));
            if(roll1+roll2 == 10) {
                score += 10 + (10 - (10 - (roll1+roll2)) ) ;
                i++;
            } else {
                score += roll1+roll2;
            }
        }
    }
    return score;
}