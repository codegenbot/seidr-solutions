int bowlingScore(string input) {
    int score = 0;
    int i = 0;
    while(i < input.length()) {
        if(input[i] == 'X') {
            score += 30;
            i++;
        } else if(input[i] == '/') {
            score += 10 + (input.substr(i+1,1) == "/" ? 0 : stoi(input.substr(i+1,1)));
            i += 3;
        } else {
            string roll = input.substr(i,2);
            int currentRoll = (roll[0] == 'X') ? 10 : ((roll[1] == '/') ? 10 - stoi(roll.substr(0,1)) : stoi(roll));
            if(currentRoll < 10) {
                score += currentRoll;
            } else {
                int first = (input[i] == 'X') ? 10 : (input[i+1] == '/') ? 10 - stoi(input.substr(i,1)) : stoi(input.substr(i,1));
                int second = (input[i+1] == '/') ? 0 : ((input[i+2] == 'X') ? 10 :stoi(input.substr(i+1,1)));
                score += first + second;
            }
            i += 2;
        }
    }
    return score;
}