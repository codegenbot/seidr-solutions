def bowling_score(frames):
    score = 0
    frame = 1
    for roll in frames:
        if roll == "X":
            score += 30
            frame += 1
        elif roll == "/" or roll == "-":
            score += int(roll[0])
            frame += 1
        else:
            score += int(roll)
    return score