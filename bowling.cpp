int bowlingScore(const std::string& input) {
    int score = 0;
    for (int i = 0; i < input.size(); ++i) { 
        if (input[i] == 'X') {
            score += 30;
        } else if (input[i] == '/') {
            int next = i + 1;
            while (next < input.size() && input[next] != '/') {
                next++;
            }
            score += (10 - (next - i));
        } else {
            score += (input[i] - '0');
        }
    }
    return score;
}