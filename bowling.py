def bowling_score(game):
    score = 0
    frame = 1
    i = 0
    while i < len(game):
        if game[i] == "X":
            if frame < 10:
                score += 10 + (10 if frame < 9 else 0)
            frame += 1
            i += 1
        elif game[i] == "/":
            first_roll = int(game[i - 1])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame += 1
            i += 2
        else:
            if game[i + 1] == "X" or game[i + 1] == "/":
                score += int(game[i]) + (10 - int(game[i]))
                if frame < 10:
                    frame += 1
                i += 2
            else:
                score += int(game[i]) + int(game[i + 1])
                frame += 2
                i += 2
    return score