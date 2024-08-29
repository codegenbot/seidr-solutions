def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split('/'):
        if len(frame) == 1:
            score += 10
            roll += 1
        elif len(frame) == 2:
            first_roll, second_roll = map(int, frame)
            if first_roll + second_roll == 10:
                score += 10
                roll += 2
            else:
                score += first_roll + second_roll
                roll += 2
        else:
            first_roll, second_roll = map(int, frame[:1]), map(int, frame[1:])
            if first_roll[0] == 10:
                score += 10 + sum(second_roll)
                roll += 2
            elif sum(first_roll) + max(second_roll) <= 10:
                score += sum(first_roll) + max(second_roll)
                roll += 2
            else:
                score += sum(first_roll) + sum(second_roll)
                roll += 2
    return score