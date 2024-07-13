def bowling_score(gutter_balls):
    score = 0
    roll = 0
    for frame in gutter_balls.split("/"):
        if len(frame) == 1:
            roll += 10
        else:
            first_roll, second_roll = map(int, frame)
            if second_roll == 10:
                roll += first_roll + second_roll
            elif first_roll + second_roll == 10:
                roll += first_roll + 10
            else:
                roll += first_roll + second_roll
    return score + roll