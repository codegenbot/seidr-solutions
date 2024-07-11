```
int bowlingScore(string s) {
    int score = 0;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '/') {
            string frame = s.substr(0, i);
            s.erase(0, i+1);
            i = -1;
        }
        else if (i < s.length() - 1) {
            int roll = stoi(s.substr(0, 2));
            s.erase(0, 2);
            i = -1;
            if (roll == 10) {
                score += 10;
            } else {
                score += roll;
            }
        } else {
            int roll = stoi(s);
            score += roll;
        }
        i++;
    }
    return score;
}