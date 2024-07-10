def bowling_score(game):
    score = 0
    frame = 1
    for bowl in game:
        if bowl == "X":
            score += 30
            frame -= 1
        elif bowl == "/":
            score += 10
            frame -= 1
        else:
            points = int(bowl)
            if frame == 9 and points < 10:
                score += 10 + 10 - points
            elif frame < 9:
                if points < 10:
                    score += 10 - points
                else:
                    score += points
            frame -= 1
    return score