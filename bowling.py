def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split("/"):
        if len(frame) == 1:
            score += int(frame)
            roll += 1
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if first_roll + second_roll == 10:
                score += 10
                roll += 1
            else:
                score += first_roll + second_roll
                roll += 1
        elif len(frame) > 2:
            strike = True
            for i in range(len(frame)):
                if frame[i] != "X":
                    if int(frame[i]) == 10:
                        score += 10
                        roll += 1
                    else:
                        score += int(frame[i])
                        roll += 1
                    break
            if strike:
                score += 10
                roll += 1
    return score