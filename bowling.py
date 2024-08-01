def bowling_score(game):
    score = 0
    frame = 1
    for bowl in game:
        if bowl == "X":
            score += 10 + (10 - frame)
            frame = 11
        elif bowl == "/":
            score += 10
            frame = 11
        else:
            if int(bowl) >= 5:
                score += 10 + 10 - int(bowl)
                frame = 11
            else:
                score += int(bowl)
    return score