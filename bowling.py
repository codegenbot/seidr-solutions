def bowling_score(game):
    score = 0
    roll = list(map(int, re.sub("[^0-9X]", "", game)))
    for i in range(10):
        if roll[i * 2] == 10:
            if roll[i * 2 + 1] == X:
                score += 30
            else:
                score += sum(roll[i * 2 : i * 2 + 11])
        elif roll[i * 2] + roll[i * 2 + 1] > 10:
            score += 20 + roll[i * 2 + 1]
        else:
            score += roll[i * 2] + roll[i * 2 + 1]
    return score