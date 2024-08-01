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
            strike = True
            for i in range(2):
                if frame[i] != 'X':
                    score += int(frame[i])
                    roll += 1
                    break
            if not strike:
                continue
    return score