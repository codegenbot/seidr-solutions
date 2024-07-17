def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split("/"):
        if len(frame) == 1:
            score += 10
            roll += 2
        elif len(frame) == 2:
            first, second = map(int, frame)
            if first + second == 10:
                score += 10
                roll += 2
            else:
                score += first + 10 - second
                roll += 2
        else:
            score += int(frame[0]) + int(frame[1])
            roll += 2
    return score