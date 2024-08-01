def bowling_score(game):
    score = 0
    frames = game.split("/")
    for i in range(len(frames)):
        if frames[i].isdigit():
            if len(frames[i]) == 1:
                score += int(frames[i])
            else:
                score += int(frames[i][0])
        elif frames[i] == "X":
            score += 10
        elif frames[i] == "-":
            continue
    return score