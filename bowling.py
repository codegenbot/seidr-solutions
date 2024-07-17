```
def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split('/'):
        if len(frame) == 1:
            score += int(frame)
            roll += 1
        elif len(frame) == 2:
            first_roll, second_roll = map(int, frame)
            if first_roll + second_roll == 10:
                score += 10
                roll += 1
            else:
                score += first_roll + second_roll
                roll += 1
        else:
            first_roll, second_roll, third_roll = map(int, frame)
            if first_roll + second_roll + third_roll == 30:
                score += 30
                roll += 3
            elif first_roll + second_roll == 10:
                score += 10
                roll += 2
                score += third_roll
                roll += 1
            else:
                score += first_roll + second_roll + third_roll
                roll += 3
    if roll < 10:
        for i in range(roll, 10):
            score += 10 - i
    return score