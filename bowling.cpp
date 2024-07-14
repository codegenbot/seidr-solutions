int bowling(string s) {
    int score = 0;
    for(int i=0; i<10; i++) {
        if(s[i] == '/') {
            string first = s.substr(0, i);
            string second = s.substr(i+1);
            int firstScore = (first[0] - '0') * 10 + (first[1] - '0');
            int secondScore = (second[0] - '0') * 10 + (second[1] - '0');
            if(firstScore + secondScore <= 10) {
                score += firstScore;
            } else {
                score += firstScore + 10;
            }
        } else {
            score += (s[i] - '0') * 10 + (s[i+1] - '0');
            i++;
        }
    }
    return score;
}