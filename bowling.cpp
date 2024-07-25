int bowling(string s) {
    int score = 0;
    int frameScore = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            frameScore = 10;
        } else if (s[i] == '/') {
            int num1 = s[i - 1] - '0';
            int num2 = s[i + 1] - '0';
            frameScore = num1 + num2;
        } else {
            int num = s[i] - '0';
            frameScore += num;
        }
        score += frameScore;
        if (frameScore == 10) {
            i++;
        }
    }
    return score;
}