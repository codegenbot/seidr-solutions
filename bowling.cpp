int bowlingScore(string str) {
    int score = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'X' && str[i] <= 'Z') {
            score += 10 - ('X' - str[i]);
        } else if (isdigit(str[i])) {
            int count = 0;
            while (i + 1 < str.length() && isdigit(str[i + 1])) {
                count++;
                i++;
            }
            score += count;
        } else if (str[i] == '/') {
            score += 10 - ('0' - str[i - 1]);
        }
    }
    return score;
}