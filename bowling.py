def bowling_score(game):
    score = 0
    roll = 0
    frame = 1
    for char in game:
        if char == "X":
            score += 30
            roll += 10
            frame += 1
        elif char == "/":
            score += 10 + int(roll)
            roll = 0
            frame += 1
        else:
            roll += int(char)
    while frame < 10 and roll < 10:
        if roll >= 10:
            score += 10
            roll = 0
            frame += 1
        else:
            score += roll
            roll = 0
            frame += 1
    return score