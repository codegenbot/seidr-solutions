int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') {
            string firstHalf = s.substr(0, i);
            string secondHalf = s.substr(i + 1);
            int firstHalfScore = 0;
            int j = 0;
            while (j < strlen(firstHalf.c_str())) {
                if (firstHalf[j] >= '1' && firstHalf[j] <= '9') {
                    firstHalfScore += (firstHalf[j] - '0');
                    j++;
                } else if (firstHalf[j] == 'X') {
                    firstHalfScore += 10;
                    j++;
                } else {
                    break;
                }
            }
            int secondHalfScore = 0;
            j = 0;
            while (j < strlen(secondHalf.c_str())) {
                if (secondHalf[j] >= '1' && secondHalf[j] <= '9') {
                    secondHalfScore += (secondHalf[j] - '0');
                    j++;
                } else if (secondHalf[j] == 'X') {
                    secondHalfScore += 10;
                    j++;
                } else {
                    break;
                }
            }
            score += firstHalfScore + secondHalfScore;
        } else {
            int frameScore = 0;
            for (int k = i; k < i+2 && k < s.length(); k++) {
                if (s[k] >= '1' && s[k] <= '9') {
                    frameScore += (s[k] - '0');
                } else if (s[k] == 'X') {
                    frameScore += 10;
                    break;
                } else {
                    break;
                }
            }
            score += frameScore;
        }
    }
    return score;
}