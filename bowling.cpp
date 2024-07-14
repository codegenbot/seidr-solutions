int bowlingScore(string str) {
    int score = 0;
    int i = 0;
    while (i < str.length()) {
        if (str[i] == '/') {
            int j = i + 1;
            while (j < str.length() && str[j] != '/') j++;
            score += min(stoi(str.substr(i+1, j-i-1)), 10);
            i = j;
        } else {
            int count = 0;
            while (i < str.length() && str[i] == 'X') {
                score += 10;
                i++;
                count++;
            }
            if (count > 0) continue;
            for (; i < str.length() && str[i] != '/'; i++) {
                if (str[i] == 'X') {
                    score += 10;
                    break;
                } else {
                    score += stoi(str.substr(i, 1));
                }
            }
        }
    }
    return score;
}