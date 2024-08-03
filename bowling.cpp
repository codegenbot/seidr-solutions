int calculateScore(string scoreString) {
    int totalScore = 0;
    int frameNumber = 1;
    
    for (int i = 0; i < scoreString.size(); i++) {
        if(scoreString[i] == '/') {
            string firstPart = scoreString.substr(0, i);
            string secondPart = scoreString.substr(i+1);
            
            // Calculate the score for this frame
            int scoreForFrame = calculateFrameScore(firstPart);
            if (frameNumber < 9 && firstPart.size() > 2) {
                scoreForFrame += calculateBonusRoll(secondPart, frameNumber);
            }
            totalScore += scoreForFrame;
            frameNumber++;
        }
    }
    
    return totalScore;
}

int calculateFrameScore(string frameScoreString) {
    int score = 0;
    int count = 0;

    for (int i = 0; i < frameScoreString.size(); i++) {
        if(isdigit(frameScoreString[i])) {
            count++;
            score += frameScoreString[i] - '0';
        } else if(count > 1) {
            return score + (10 - count);
        }
    }

    // If the frame is an open frame, add the remaining pins
    return score + 10 - count;
}

int calculateBonusRoll(string bonusRoll, int frameNumber) {
    if(bonusRoll.size() == 0) return 0;
    
    string firstPart = bonusRoll.substr(0, 1);
    string secondPart = bonusRoll.substr(1);
    
    // If the bonus roll is a strike, add 10 + the score for the remaining frames
    if(firstPart.size() > 0 && firstPart == 'X') {
        return 10 + calculateScore(secondPart) - frameNumber * 10;
    } else { // For a spare or open frame, just add the score of the bonus roll
        return stoi(bonusRoll);
    }
}