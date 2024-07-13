```cpp
int bowlingScore(string s) {
    int score = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
        } else if (c == '/') {
            score += 10 + (score - 20);
        } else if ('1' <= c && c <= '9') {
            int temp = c - '0';
            score += temp * 10;
        }
    }
    return score;
}