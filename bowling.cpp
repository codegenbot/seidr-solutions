```
int getScore(string bowls) {
    int score = 0;
    bool prevStrikeOrSpare = false;
    for (int i = 0; i < bowls.length(); i++) {
        if (bowls[i] == 'X') {
            // strike
            score += 10;
            prevStrikeOrSpare = true;
        } else if (bowls[i] == '/') {
            // spare
            score += 10 + int(bowls[i+1]);
            prevStrikeOrSpare = true;
        } else if (prevStrikeOrSpare) {
            // adjust for strike or spare
            score += int(bowls[i]);
            prevStrikeOrSpare = false;
        } else {
            // regular roll
            score += int(bowls[i]);
        }
    }
    return score;
}
```