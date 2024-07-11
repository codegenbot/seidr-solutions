```cpp
int bowlingScore(std::string s) {
    int score = 0;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '/') {
            int firstRoll = std::stoi(s.substr(0, i));
            int secondRoll = std::stoi(s.substr(i + 1));
            if (firstRoll + secondRoll >= 10) {
                score += 10;
            } else {
                score += firstRoll + secondRoll;
            }
            i++;
        } else {
            int roll = std::stoi(s.substr(i, 1));
            if (roll == 10) {
                score += 10;
            } else {
                score += roll;
            }
            i++;
        }
    }
    return score;
}