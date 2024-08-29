```
def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split('/'):
        if len(frame) == 1:
            if int(frame) == 10:
                score += 10 + 10
                continue
            else:
                score += int(frame)
                roll += 1
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if first_roll + second_roll == 10:
                score += first_roll + second_roll
                roll += 1
            else:
                score += first_roll
                roll += 1
                if second_roll != 0:
                    if roll < 9:
                        third_roll = int(game[game.index(frame) + len(frame) + 1])
                        if third_roll == 10:
                            score += second_roll + third_roll
                            roll += 2
                        else:
                            score += second_roll + third_roll
                            roll += 3
                    else:
                        score += second_roll
        else:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            third_roll = int(frame[2])
            if first_roll + second_roll + third_roll == 30:
                score += first_roll + second_roll + third_roll
                roll += 3
    return score