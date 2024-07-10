int bowlingScore(string input) {
    int score = 0;
    int frame = 1;
    for(int i=0; i<input.length();i++) {
        if(input[i] != '/') {
            if(input[i] == 'X') {
                score += 30;
                frame++;
            } else if(input[i] - '0' > 0) {
                int pins = input[i] - '0';
                score += pins + (frame < 10 ? min(10, frame) : 1);
                frame++;
            }
        } else {
            frame++;
        }
    }
    return score;
}