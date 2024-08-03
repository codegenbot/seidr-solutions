def bowling_score(gutter_balls):
    score = 0
    roll = []
    for frame in gutter_balls.split("/"):
        if len(frame) > 1 and frame[0] != "X":
            roll.append(int(frame))
        else:
            while len(roll) < 2:
                roll.append(10)
            score += sum(roll)
            roll = []
    if roll:
        score += sum(roll)
    return score