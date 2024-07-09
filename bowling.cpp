int bowlingScore(std::string s) {
    int score = 0;
    bool lastRollWasStrike = false;
    bool lastRollWasSpare = false;

    for (char c : s) {
        if (c == 'X') {
            score += 10 + (lastRollWasStrike ? 10 : (lastRollWasSpare ? 5 : 0));
            lastRollWasStrike = true;
            lastRollWasSpare = false;
        } else if (c == '/') {
            int nextOneRoll = c - '0';
            score += nextOneRoll +stoi(string(1,c) + string(1,'0'))/2;
            lastRollWasStrike = false;
            lastRollWasSpare = true;
        } else {
            int roll = c - '0';
            if (c == '9') lastRollWasSpare = true;
            else lastRollWasStrike = true;
            score += roll;
        }
    }

    return score;
}

int main() {
    std::string s = "XXXXX/6/5/X-8/X/X-4/X/X/9/-7/-5";
    int score = bowlingScore(s);
    std::cout << "The score is: " << score << std::endl;
}