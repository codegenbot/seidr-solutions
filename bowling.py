def bowling_score(bowling_game):
    score = 0
    roll = list(map(int, re.sub("[^0-9X]", "", bowling_game)))
    for i in range(10):
        if roll[i * 2] == 10:
            score += 10 + sum(roll[i * 2 + 1 : i * 2 + 3])
        elif roll[i * 2] + roll[i * 2 + 1] >= 10:
            score += 10 + roll[i * 2 + 1]
        else:
            score += roll[i * 2] + roll[i * 2 + 1]
    return score