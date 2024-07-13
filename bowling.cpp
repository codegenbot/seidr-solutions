Here is the solution:

int bowlingScore(string s) {
    int score = 0;
    int i = 0;
    while (i < s.size()) {
        if (s[i] == '/') {
            int j = i + 1;
            while (j < s.size() && s[j] != '/') {
                j++;
            }
            score += min(stoi(s.substr(i+1, j-i-1)), 10);
            i = j;
        } else if (s[i] == 'X') {
            score += 10 + bowlingScore(s.substr(i+1));
            return score;
        } else {
            int count = 0;
            while (i < s.size() && s[i] != '/') {
                if (s[i] == 'X') {
                    score += 10;
                    i++;
                    break;
                }
                count++;
                i++;
            }
            if (count > 1) {
                score += count * 10;
            } else if (count == 1) {
                score += count * 10 + bowlingScore(s.substr(i));
                return score;
            }
        }
    }
    return score;
}