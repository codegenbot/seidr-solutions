def bowling_score(bowling):
    score = 0
    roll = []
    for frame in bowling:
        if "/" in frame:
            x1, x2 = map(int, re.split("/", frame))
            score += x1 + x2
            if x1 == 10:
                roll.append(x1)
                roll.append("X")
            elif sum(roll) + x1 < 10:
                roll.extend(["/"] * (10 - sum(roll)))
            else:
                roll.append("/")
        else:
            score += int(frame)
    return score