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
            while strike:
                if frame[0] == 'X':
                    score += 10 + (10 - int(frame[-1]))
                    roll += 1
                    break
                elif frame[0] in ['7', '8', '9']:
                    score += 10 + int(frame[0]) + int(frame[-1])
                    roll += 2
                    break
                else:
                    score += 10 + int(frame[0]) + int(frame[1])
                    roll += 2
                    break
    return score