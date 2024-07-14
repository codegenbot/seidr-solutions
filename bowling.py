def bowling_score(game):
    score = 0
    roll = 0
    frame = 1
    for x in game:
        if x == "X":
            score += 10 + (10 - roll)
            roll = 10
            frame += 1
        elif x == "/":
            score += 10 - int(roll)
            roll = 0
            frame += 1
        else:
            roll += int(x)
    if roll < 10:
        score += roll
    return score