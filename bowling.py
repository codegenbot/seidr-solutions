def bowling_score(game):
    score = 0
    roll = []
    for i in game:
        if i.isdigit():
            roll.append(int(i))
        elif i == "X":
            score += 10 + (10 - sum(roll)) if len(roll) < 2 else 10
            roll = []
        elif i == "-":
            score += sum(roll)
            roll = []
        elif i == "/":
            frame_score = 10 - sum(roll)
            score += 10 - min(frame_score, 10)
            roll = []
    if len(roll) > 0:
        score += sum(roll)
    return score