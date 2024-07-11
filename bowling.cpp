```cpp
int bowlingScore(std::string s) {
    int score = 0;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '/') {
            int firstRoll = stoi(s.substr(0, i));
            int secondRoll = stoi(s.substr(i + 1, s.find('/') - i - 1));
            if (firstRoll + secondRoll >= 10) {
                score += 10;
            } else {
                score += firstRoll + secondRoll;
            }
            i = s.find('/', i) + 1;
        } else {
            int roll = stoi(s.substr(i, 1));
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