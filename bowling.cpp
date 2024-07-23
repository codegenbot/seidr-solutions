int bowling(string s) {
    int score = 0;
    int i = 0;
    while(i < s.length()) {
        if(s[i] == 'X' || (s[i] >= '1' && s[i] <= '9') && (i+2 <= s.length() && (s[i+1] == '/' || s[i+1] >= '1' && s[i+1] <= '9'))){
            int frame = 10;
            if(s[i] == 'X') {
                score += 10;
                i++;
                continue;
            }
            int spare = s[i] - '0';
            for(int j=i+2; j<s.length(); j++) {
                if(s[j] == '/') break;
                spare *= 10 + (s[j] - '0');
            }
            score += spare/10;
            i++;
        } else {
            int balls = 1;
            while(i < s.length() && (s[i] >= '1' && s[i] <= '9')) {
                if(s[i+1] == '/') break;
                balls *= 10 + (s[i] - '0');
                i++;
            }
            score += balls/10;
        }
    }
    return score;
}