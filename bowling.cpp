int bowlingScore(string input) {
    int score = 0;
    bool inFrame = false;
    queue<int> pinsInFrame;
    
    for(int i=0; i<input.length(); i++) {
        char c = input[i];
        
        if(c == 'X') {
            score += 10;
            inFrame = false;
            pinsInFrame = queue<int>();
        } else if(c == '/') {
            int currentPins = 10 - (int)('0' + input[i-1]) - (int)('0' + input[i]);
            score += currentPins;
            inFrame = false;
            pinsInFrame = queue<int>();
        } else {
            if(inFrame) {
                pinsInFrame.push((int)('0' + c));
            } else {
                int currentPins = (int)('0' + c);
                while(currentPins > 0 && !pinsInFrame.empty()) {
                    score += pinsInFrame.front();
                    pinsInFrame.pop();
                    currentPins -= 10;
                }
                inFrame = true;
            }
        }
        
        if(inFrame) {
            pinsInFrame.push((int)('0' + c));
        }
    }
    
    while(!pinsInFrame.empty()) {
        score += pinsInFrame.front();
        pinsInFrame.pop();
    }
    
    return score;
}