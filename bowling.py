def bowling_score(rolls):
    score = 0
    roll = 0
    for frame in rolls.split("/"):
        if len(frame) == 1:
            score += 10
        elif len(frame) == 2:
            score += int(frame[0]) * 2 + 10 - int(frame[0])
        else:
            if int(frame[0]) == 10:
                score += 10 + 10
            else:
                score += int(frame[0]) * 2
            roll += 1
    return score