def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split("/"):
        if len(frame) == 1:
            score += int(frame)
            roll += 1
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            roll += 1
        else:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            third_roll = 10 - (first_roll + second_roll)
            score += first_roll + second_roll + third_roll
            roll += 3
    return score