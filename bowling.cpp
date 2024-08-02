int bowlingScore(const string& input) {
    int score = 0;
    vector<int> rolls(21); // Assuming maximum of 21 frames in a game.
    
    for (int i = 0; i < input.length(); i++) {
        if (isdigit(input[i])) {
            if (input[i + 1] == '/') { // Strike
                score += 10 + rolls[i + 2];
                i++; // Move forward two positions to get the next frame.
            } else if (isdigit(input[i + 1])) { // Spare
                int spare = input[i] - '0' + (input[i + 1] - '0');
                score += 10;
                rolls[i + 2] = spare; // Update the roll for the next frame.
                i++; // Move forward two positions to get the next frame.
            } else { // Regular Roll
                int roll1 = input[i] - '0';
                if (input[i + 1] == 'X') { // Strike in the next frame
                    score += roll1;
                } else {
                    int roll2 = input[i + 1] - '0';
                    score += roll1 + roll2; 
                }
            }
        }
    }
    
    return score;
}