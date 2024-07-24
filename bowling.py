```
def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split('/'):
        if len(frame) == 1:
            score += 10
        elif len(frame) > 1 and int(frame[0]) + int(frame[1]) == 10:
            score += 10 + int(frame[-1])
        else:
            first_roll = int(frame[0])
            second_roll = 10 - first_roll if len(frame) > 1 else int(frame[1])
            if roll < 9 and first_roll == 10:
                next_frame = game.split('/')[roll+1]
                if len(next_frame) > 1:
                    score += 20
                    roll += 2
                else:
                    score += 10 + second_roll
                    roll += 1
            elif roll < 9 and first_roll + second_roll == 10:
                score += 10 + second_roll
                roll += 1
            else:
                score += first_roll + second_roll
                roll += 1
    return score