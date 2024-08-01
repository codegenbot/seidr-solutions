```
def bowling_score(game):
    score = 0
    roll = 0
    for frame in game:
        if '/' in frame:
            first_roll = int(frame.split('/')[0])
            second_roll = 10 - first_roll
            if first_roll == 10:
                score += 10 + (second_roll if roll+1 < 9 else max(roll+1, 2))
            elif first_roll + second_roll == 10:
                score += 10
            else:
                score += first_roll + second_roll
        else:
            score += int(frame)
        roll += 1
    return score