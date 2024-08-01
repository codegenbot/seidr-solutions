```
def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split('/'):
        if len(frame) == 1:
            score += 10
            roll += 2
        elif len(frame) == 2 and int(frame[0]) < 10:
            score += int(frame[0]) * 2 + 10 - int(frame[0])
            roll += 2
        else:
            if int(frame[0]) == 10:
                score += 10 + 2*(10-int(frame[1]))
                roll += 4
            else:
                score += int(frame[0]) * 2
                roll += 2
                if len(game.split('/')) > (roll // 2):
                    frame = game.split('/')[int((roll-1)/2)]
                    if frame[-1] == 'X':
                        score += 10 + 10 - int(frame[:-1])
                        roll += 3
                    else:
                        score += 10 + int(frame[:-1]) * 2
                        roll += 3
    return score