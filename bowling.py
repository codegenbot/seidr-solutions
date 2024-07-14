def bowling_score(game):
    score = 0
    frame = 1
    for bowl in game:
        if bowl == "X":
            score += 10 + (10 if frame < 9 else 0)
            frame += 1
        elif bowl == "/":
            first, second = map(int, bowl.split("/"))
            score += first + second
            frame += 1
        else:
            score += int(bowl)
    return score