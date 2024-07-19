int bowlingScore(string input) {
    int score = 0;
    for (int i = 0; i < 10; ++i) {
        if (input[i] == '/') {
            string prevFrame = input.substr(0, i);
            string nextRoll = input.substr(i+1, 2);
            if (nextRoll[0] == 'X') {
                score += 30;
                input.erase(0, i+2);
                --i;
            } else if (nextRoll[0] - '0' + nextRoll[1] - '0' >= 10) {
                string spare = prevFrame + nextRoll[0];
                int bonus = 10 - (spare[0] - '0') * 10;
                score += (prevFrame[0] == 'X'? 20 : prevFrame[0] - '0') * 10 + bonus;
                input.erase(0, i+2);
                --i;
            } else {
                int first = prevFrame[0] - '0';
                int second = nextRoll[0] - '0';
                score += (prevFrame[0] == 'X'? 20 : prevFrame[0] - '0') * 10 + first + second;
                input.erase(0, i+2);
                --i;
            }
        } else if (input[i] == 'X') {
            score += 30;
            input.erase(i, 1);
        } else {
            int x = input[i] - '0';
            score += x * 10;
            input.erase(i, 1);
        }
    }
    return score;
}