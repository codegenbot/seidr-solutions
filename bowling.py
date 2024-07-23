def bowling_score(game):
    frames = game.split("/")
    score = 0
    for i in range(len(frames)):
        if len(frames[i]) == 1:
            score += 10 - int(frames[i])
        elif len(frames[i]) > 1 and len(frames[i]) < 3:
            score += sum(int(x) for x in frames[i])
        else:
            first_roll = int(frames[i][0])
            second_roll = int(frames[i][1])
            if first_roll + second_roll == 10:
                if i == 9:
                    score += 10
                else:
                    next_roll = int(frames[i + 1].lstrip("X"))
                    if next_roll != 0:
                        score += first_roll + second_roll + next_roll
                    else:
                        score += 10
            elif i < 9 and frames[i + 1].startswith("X"):
                score += first_roll + second_roll + 10
            else:
                score += first_roll + second_roll
    return score