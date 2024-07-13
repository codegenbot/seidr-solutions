int bowlingScore(string s) {
    int score = 0;
    bool spare = false;
    for (char c : s) {
        if (c == 'X') {
            score += 10 + ((spare) ? 10 : 0);
            spare = true;
        } else if (c == '/') {
            score += 10 - to_int(s.substr(1, 1));
            spare = false;
        } else if (isdigit(c)) {
            int num = to_int(string(1, c));
            score += num;
            if (spare) {
                spare = false;
            }
        }
    }
    return score;
}

int to_int(const string& s) {
    return stoi(s);
}