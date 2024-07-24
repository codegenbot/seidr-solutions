```
def bowling_score(game):
    score = 0
    roll = 0
    frame = 0
    for char in game:
        if char.isdigit():
            roll += int(char)
        else:
            if roll == 10:
                score += 10 + 10
            elif roll < 10:
                score += 10
            else:
                score += 20
            roll = 0
            frame += 1
    if roll > 0 and roll < 10:
        score += roll * 2
    return score