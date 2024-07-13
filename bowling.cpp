int bowlingScore(string bowls) {
    int score = 0;
    bool firstBallInTurn = true;

    for (char& bowl : bowls) {
        if (bowl == '/') {
            score += (firstBallInTurn ? 10 : 0);
            firstBallInTurn = false;
        } else {
            score += (int)bowl - 48; // convert char to int
        }
    }

    return score;
}