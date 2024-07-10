```
def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split('/'):
        if len(frame) == 1:
            score += int(frame)
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if second_roll == 10:
                score += first_roll + 10
                roll += 1
            else:
                score += first_roll + second_roll
        else:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            third_roll = int(frame[2])
            if third_roll == 10:
                score += first_roll + second_roll + 10
                roll += 1
            elif first_roll + second_roll >= 10:
                bonus = 10 - (first_roll + second_roll)
                score += first_roll + second_roll + bonus
                roll += 1
            else:
                score += first_roll + second_roll + int(frame[2])
    if roll < 10:
        score += 10 - roll
    return score