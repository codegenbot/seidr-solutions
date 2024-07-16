int bowlingScore(const std::string& s) {
    int score = 0;
    int currentRoll = 0;

    for (int i = 0; i < s.size(); ++i) {
        char c = s.at(i);

        if (!std::isdigit(c) && c != 'X' && c != '/') {
            return -1;
        }

        if (c == 'X') {
            score += 10;
            currentRoll = 0;
        } else if (c == '/') {
            score += currentRoll + 5;
            currentRoll = 0;
        } else {
            if(std::isdigit(c)) {
                currentRoll += c - '0';
            } else {
                currentRoll *= 10;
                currentRoll += c - '0';

                if(i < s.size() - 1) {
                    char nextC = s.at(i + 1);
                    if((int)nextC >= '0' && (int)nextC <= '9') {
                        int secondRoll = nextC - '0';
                        if(currentRoll + secondRoll == 10) {
                            score += 10;
                            currentRoll = 0;
                            i++;
                        } else {
                            score += secondRoll;
                            currentRoll = 10 - currentRoll - secondRoll;
                        }
                    } else {
                        currentRoll = 10 - currentRoll;
                    }
                } else {
                    if(currentRoll < 10) {
                        score += currentRoll;
                    } else {
                        score += 10;
                        score += (currentRoll - 10);
                    }
                }
            }

            if(i == s.size() - 1 || ((int)c >= '0' && (int)c <= '9')) {
                if(currentRoll < 10) {
                    score += currentRoll;
                } else {
                    score += 10;
                    score += (currentRoll - 10);
                }
            }
        }
    }

    return score;
}