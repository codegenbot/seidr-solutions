def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split("/"):
        if len(frame) == 1:
            score += 10 + (9 - int(frame)) * 10
            roll += 2
        elif len(frame) > 1:
            if int(frame[0]) == 10:
                score += 10 + sum(map(int, frame[1:]))
                roll += 2
            else:
                score += sum(map(int, frame))
                roll += 1
    return score