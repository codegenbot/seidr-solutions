```cpp
int bowlingScore(std::string s) {
    int score = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'X') {
            score += 10;
            roll++;
        } else if (s[i] >= '1' && s[i] <= '9') {
            int rolls = std::stoi(s.substr(i, 2));
            i += 1;
            roll = 0;
            for (int j = 0; j < rolls; ++j) {
                if (s[i] == '/') {
                    score += 10 - (10 - roll);
                    roll = 0;
                } else if (s[i] >= '1' && s[i] <= '9') {
                    roll++;
                }
                i++;
            }
        } else if (s[i] == '/') {
            score += 10 - (10 - roll);
            roll = 0;
        } else if (s[i] >= '1' && s[i] <= '9') {
            roll++;
        }
    }
    return score + roll * 10;
}