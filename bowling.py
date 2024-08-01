def bowling_score(gutter_balls):
    score = 0
    roll = []
    for frame in gutter_balls.split("/"):
        if len(frame) == 1 and frame.isdigit():
            roll.append(int(frame))
        else:
            if len(roll) < 2:
                raise ValueError("Invalid input")
            score += sum(roll)
            roll = []
    if len(roll) > 0:
        score += sum(roll)
    return score