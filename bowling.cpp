```c++
int bowlingScore(std::string s) {
    int score = 0;
    std::stringstream ss(s);
    char c;
    bool strike = false;
    while (ss >> c) {
        if (c == 'X') {
            score += 30;
            strike = true;
        } else if (c == '/') {
            if (!strike) {
                score += 10 + (score / 10 - 1);
            }
            strike = false;
        } else {
            int temp = c - '0';
            if (strike) {
                score += temp * 2;
                strike = false;
            } else {
                score += temp;
            }
        }
    }
    return score;
}