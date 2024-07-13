def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split("/"):
        if len(frame) == 1:
            score += 10 + (10 - int(frame)) * 2
            roll += 2
        elif len(frame) > 1:
            if int(frame[0]) == 10:
                score += 10 + sum(map(int, frame[1:]))
                roll = min(roll + 2, 10)
            else:
                score += sum(map(int, frame))
                roll += 2
    return score