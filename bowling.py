def bowling_score(bowling_game):
    score = 0
    roll = list(map(int, re.sub("[/-X]", "", bowling_game)))
    for i in range(0, len(roll), 2):
        if i < 9 and (i == 8 or roll[i] + roll[i + 1] < 10):
            score += 10 - roll[i]
        else:
            score += sum(roll[i : i + 2])
    return score