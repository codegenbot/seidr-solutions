def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split("/"):
        if len(frame) == 1:
            score += int(frame)
            roll += 1
        elif len(frame) == 2:
            first_roll, second_roll = map(int, frame)
            if first_roll + second_roll < 10:
                score += first_roll + second_roll
                roll += 1
            else:
                score += 10
                roll += 1
        else:
            first_roll, second_roll, third_roll = map(int, frame)
            score += first_roll + second_roll
            if first_roll + second_roll == 10:
                score += third_roll
                roll += 1
            else:
                score += third_roll + second_roll
                roll += 2
    return score