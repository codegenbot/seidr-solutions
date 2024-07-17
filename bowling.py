def bowling_score(game):
    score = 0
    frame = 1
    for roll in game:
        if roll.isdigit():
            score += int(roll)
            frame -= 1
        elif roll == "/":
            score += 10 - len(str(frame))
            frame = 0
        elif roll == "X":
            score += 10 + (10 if frame < 9 else 0)
            frame = 0
        else:
            if frame < 9:
                score += min(int(roll), 10) + (
                    10 if int(roll) == 10 and frame < 8 else 0
                )
                frame -= 1
            else:
                score += min(int(roll), 10)
    return score