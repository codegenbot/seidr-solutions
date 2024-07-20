int bowlingScore(const string& input) {
    int score = 0;
    for (int i = 0; i < input.length(); ++i) {
        if (input.at(i) == 'X') {
            score += 30;
        } else if (input.at(i) == '/') {
            int next = i + 1;
            while (next < input.length() && input.at(next) != '/') {
                next++;
            }
            score += (10 - (next - i));
        } else {
            score += (input.at(i) - '0');
        }
    }
    return score;
}