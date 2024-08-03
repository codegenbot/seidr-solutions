def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split("/"):
        if len(frame) == 1:
            score += int(frame)
        elif len(frame) == 2:
            score += sum(map(int, frame))
        else:
            first_roll = int(frame[0])
            second_roll = int(frame[1:])
            if first_roll == 10:
                score += first_roll + second_roll
            else:
                score += first_roll + second_roll
                roll += 1
    return score