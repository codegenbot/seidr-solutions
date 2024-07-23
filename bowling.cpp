int calculateBowlingScore(const std::string& s) {
    int total = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'X') {
            total += 10;
            if (s[i + 1] == 'X') {
                total += 10;
                if (s[i + 2] == 'X') {
                    total += 10;
                } else {
                    total += (s[i + 2] == '/') ? 10 : (s[i + 2] - '0');
                }
            } else {
                total += (s[i + 1] == '/') ? 10 : (s[i + 1] - '0');
            }
        }
    }
    return total;
}