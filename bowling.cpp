int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            score += 30;
        } else if (s[i] == '/') {
            int nextTwo = (i + 2 < s.length()) ? stoi(s.substr(i + 1, 2)) : 0;
            score += 10 + nextTwo;
            i++;
        } else {
            int thisFrame = 0;
            for (int j = i; j < s.length() && j <= i + 1; j++) {
                if (s[j] == 'X') {
                    thisFrame += 30;
                    break;
                } else if (s[j] == '/') {
                    int nextTwo = stoi(s.substr(j + 1, 2));
                    thisFrame += 10 + min(nextTwo, 10);
                    j++;
                    break;
                } else {
                    thisFrame += s[j] - '0';
                }
            }
            score += thisFrame;
        }
    }
    return score;
}