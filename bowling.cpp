int bowlingScore(string s) {
    int score = 0;
    int i = 0;
    while(i < s.length()) {
        if(s[i] == '/') {
            string first = s.substr(0, i);
            string second = s.substr(i+1);
            score += (first[0] - '0') * 10 + (second[0] - '0');
            i++;
        } else {
            int count = 0;
            while(i < s.length() && s[i] != '/') {
                count *= 10;
                count += (s[i] - '0');
                i++;
            }
            score += count;
        }
    }
    return score;
}