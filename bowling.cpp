int bowlingScore(string &s) {
    int score = 0;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == 'X') {
            score += 30;
            i++;
        } else if (s[i] == '/') {
            string first = s.substr(i - 2, 1);
            string second = s.substr(i + 1, 1);
            int firstNum = first[0] - '0';
            int secondNum = second[0] - '0';
            score += firstNum * 10 + secondNum;
            i++;
        } else {
            int num = s[i] - '0';
            if (s[i+1] == 'X' || s[i-1] == '/') {
                score += 10 + num*10;
                i++;
            } else {
                string nextTwo = s.substr(i + 1, 2);
                int nextNum = nextTwo[0] - '0';
                int nextNextNum = nextTwo[1] - '0';
                score += num * 10 + nextNum + nextNextNum;
                i += 2;
            }
        }
    }
    return score;
}