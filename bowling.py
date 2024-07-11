```
def bowling_score(game):
    score = 0
    roll = 0
    for frame in game:
        if '/' in frame:
            first_roll = int(frame.split('/')[0])
            second_roll = int(frame.split('/')[1].lstrip('X'))
            if 'X' in frame:
                score += 10 + (first_roll + second_roll)
            else:
                score += first_roll + second_roll
        else:
            if frame == 'X':
                score += 10
                roll += 1
            elif frame == 'XX':
                score += 20
                roll += 2
            else:
                score += int(frame) * 2
                roll += 2
    return score