def bowling_score(game):
    score = 0
    frame = 1
    for roll in game + "/":
        if roll == "X":
            score += 30
            frame += 1
        elif roll == "/":
            score += 10
            frame += 1
        else:
            if frame < 10 and len(roll) > 1:
                strike = int(roll[0]) * 10 + int(roll[1])
                score += strike
                frame += 1
            elif roll == "X":
                score += 10
                frame += 1
            else:
                score += int(roll)
    return score