int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 30;
            i++;
        } else if (s[i] == '/') {
            int next = i + 1;
            while (next < s.length() && !isdigit(s[next])) next++;
            int nextRoll = stoi(s.substr(next, 2));
            score += 10 - nextRoll;
            i = next;
        } else {
            int currentRoll = 0;
            while (i < s.length() && isdigit(s[i])) {
                currentRoll *= 10 + (s[i] - '0');
                i++;
            }
            if (currentRoll > 10) score += 10;
            else score += currentRoll;
        }
    }
    return score;
}