int bowlingScore(string s) {
    int score = 0;
    int i = 0;
    while(i < s.length()) {
        if(s[i] == 'X') {
            score += 30;
            i++;
        } else if(isdigit(s[i])) {
            int pins = s[i] - '0';
            if(i+1 < s.length() && (s[i+1] == '/' || s[i+1] == 'X')) {
                score += 10 + pins;
                i+=2;
            } else if(i+1 < s.length() && s[i+1] == '/') {
                int j = i + 2;
                while(j < s.length() && !isdigit(s[j])) {
                    j++;
                }
                int endPins = s[j] - '0';
                score += 10 - endPins;
                i = j;
            } else {
                i++;
                while(i < s.length() && isdigit(s[i])) {
                    pins = pins*10 + (s[i] - '0');
                    i++;
                }
            }
        } else if(s[i] == '/') {
            int j = i + 1;
            while(j < s.length() && !isdigit(s[j])) {
                j++;
            }
            int endPins = s[j] - '0';
            score += 10 - endPins;
            i = j;
        } else {
            i++;
        }
    }
    return score;
}