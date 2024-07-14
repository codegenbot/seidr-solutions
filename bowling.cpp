int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'X') {
            score += 10 + (i < s.length() - 2 && s[i+1] == '/' ? 10 : 0);
            frame++;
        } else if(s[i] == '/') {
            int next = i+1;
            while(next < s.length() && s[next] != 'X') next++;
            score += (i/2 + 1)*5 + (next - i)/2*5;
            frame++;
            i = next - 1;
        } else {
            int pins = 0;
            for(int j=i; j<s.length(); j++) {
                if(s[j] == 'X') {
                    score += 10;
                    frame++;
                    i = j;
                    break;
                } else if(s[j] == '/') {
                    int next = j+1;
                    while(next < s.length() && s[next] != 'X') next++;
                    pins += (next - j)/2*5;
                    i = next - 1;
                    frame++;
                    break;
                } else {
                    pins += s[j] - '0';
                    if(j == s.length() - 1) {
                        score += pins;
                        return score;
                    }
                }
            }
        }
    }
    return score;
}