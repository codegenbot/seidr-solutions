int bowlingScore(string s) {
    int score = 0;
    for(int i = 0; i < 10; i++) {
        if(s[i] == '/') {
            string part1 = s.substr(0, i);
            string part2 = s.substr(i+1);
            int first = (part1[0] - '0') * (part1.length() > 1 ? 1 : 10);
            int second = (part2[0] - '0') * (part2.length() > 1 ? 1 : 10);
            score += max(first, 10) + second;
        } else if(s[i] == 'X') {
            score += 30;
        } else {
            int sum = 0;
            for(int j = i; j < i+2 && j < s.length(); j++) {
                sum = sum * 10 + (s[j] - '0');
            }
            score += sum;
        }
    }
    return score;
}