```
def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split('/'):
        if len(frame) == 1:
            score += int(frame)
            roll += 1
        elif len(frame) == 2:
            score += int(frame[0]) + int(frame[1])
            roll += 1
        else:
            strike = int(frame[0])
            score += strike + 10
            if roll < 9:
                next_roll = int(game.split('/')[roll+1].split('X')[0])
                score += next_roll
            roll += 1
    return score