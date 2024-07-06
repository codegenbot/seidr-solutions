using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentRolls = 0;
    vector<int> rolls;

    for (char c : s) {
        if (c == '/') {
            if (currentRolls < 2) {
                if (rolls.back() + 10 - '0' > 10) {
                    score += 10;
                } else {
                    score += rolls.back() + 10 - '0';
                }
                currentRolls = 0;
            } else {
                int roll = 0;
                for (int i = 0; c != '/'; i++) {
                    c = s[i];
                    roll = roll * 10 + c - '0';
                }
                score += roll;
                currentRolls = 1;
            }
        } else {
            rolls.push_back(c - '0');
            if (currentRolls < 2) {
                currentRolls++;
            } else {
                int roll = 0;
                for (int i = 0; i < 2 && s[i] != '/'; i++) {
                    roll = roll * 10 + s[i] - '0';
                }
                score += roll;
                currentRolls = 1;
            }
        }
    }

    if (currentRolls == 2) {
        int roll = 0;
        for (int i = 0; i < 2; i++) {
            roll = roll * 10 + s[i] - '0';
        }
        score += roll;
    } else if (currentRolls > 1) {
        int roll = 0;
        for (int i = 0; i < currentRolls; i++) {
            roll = roll * 10 + rolls.back() - '0';
            rolls.pop_back();
        }
        score += roll;
    }

    return score;