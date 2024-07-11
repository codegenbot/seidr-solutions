```
def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split(' '):
        if '/' in frame:
            first_roll = int(frame.split('/')[0])
            second_roll = 10 - first_roll
            if first_roll == 10:
                score += 10 + (second_roll * 2)
            else:
                score += first_roll + second_roll
        elif frame == 'X':
            score += 10
            roll += 1
        elif frame == 'XX':
            score += 20
            roll += 2
        else:
            score += int(frame) * 2
            roll += 2
    return score