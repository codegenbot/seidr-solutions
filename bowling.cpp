int bowlingScore(std::string input) {
    int score = 0;
    int i = 0;
    while (i < input.length()) {
        if (input[i] == 'X') { 
            // strike, 10 points
            score += 10;
            if (++i >= input.length() || input[i] != '/') {
                // end of roll
                continue; 
            }
            i++; // skip '/'
            int next = input[i] - '0';
            if (next == 0) { 
                // spare, 10 points
                score += 10;
            } else {
                // strike or another roll
                score += 10 + next;
            }
        } else if(input[i] == '/') { 
            int next = input[i+1] - '0';
            int last = input[i-1] - '0';
            // spare, 10 points minus last two rolls
            score += 10 - (last + next);
            i+=2; 
        } else {
            int roll1 = input[i] - '0';
            if(i + 1 < input.length() && input[i+1] == '/') { 
                // spare, add first roll and 10 minus last two
                score += roll1 + 10 - (input[i+2] - '0' + input[i+3] - '0');
                i+=3; 
            } else {
                int roll2 = input[i+1] - '0';
                // regular rolls, add both
                score += roll1 + roll2;
                i++; 
            }
        }
    }
    return score;
}