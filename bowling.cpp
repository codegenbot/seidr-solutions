```cpp
int bowlingScore(std::vector<int>& s) {
    int score = 0;
    for (int i = 0; i < s.size(); ) {
        if (s[i] == '/') {
            if (i > 0 && s[i - 1] + 5 <= 10) {
                score += 10;
                i++;
            } else {
                score += 15;
                i+=2;
            }
        } else if (s[i] >= 1 && s[i] <= 9) {
            score += s[i];
            i++;
        } else if (s[i] == 10) {
            score += 10;
            i++;
        }
    }
    return score;
}