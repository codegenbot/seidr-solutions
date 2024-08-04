```
def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split('/'):
        if len(frame) == 1:
            score += 10
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if first_roll + second_roll == 10:
                score += 10
            else:
                score += first_roll + second_roll
        else:
            for i in range(2):
                roll += int(frame[i])
            if roll < 10:
                score += roll
            else:
                score += 10
            roll = 0
    return score