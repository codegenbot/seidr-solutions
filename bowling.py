def bowling_score(game):
    score = 0
    frame = 1
    rolls = game.split("/")
    for roll in rolls:
        if roll == "X":
            score += 10 + (10 if frame < 9 else 0)
            frame += 1
        elif roll[0] == "X" and len(roll) > 1:
            score += 10 + int(roll[1])
            frame += 1
        else:
            score += int(roll)
            frame += 1 if roll != "X" else 2
    return score