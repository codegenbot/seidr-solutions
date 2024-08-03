def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split("/"):
        if len(frame) == 1:
            score += int(frame)
        elif len(frame) == 2:
            score += int(frame[0]) + int(frame[1])
        else:
            score += 10 + int(frame[0])
        roll += 1
        if roll < 10 and (len(frame) == 2 or frame[0] != "X"):
            if int(frame[0]) + int(frame[1]) >= 10:
                score += int(frame[0]) + int(frame[1]) - 10
    return score