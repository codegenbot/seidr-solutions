```
def bowling_score(game):
    score = 0
    roll = 0
    frames = [int(frame) for frame in game.split('/')]
    i = 0
    while i < len(frames):
        if roll < 10:
            if frames[i] == 10:
                score += frames[i]
                roll += 1
                i += 1
            elif frames[i] + frames[i+1] == 10:
                score += frames[i] + frames[i+1]
                roll += 2
                i += 2
            else:
                if frames[i] != 0 and frames[i+1] != 0:
                    score += frames[i]
                    roll += 1
                    i += 1
                    if frames[i+1] == 10 or (frames[i+1] + frames[i+2]) == 10:
                        score += frames[i+1] + frames[i+2]
                        roll += 2
                        i += 2
                    else:
                        score += frames[i+1]
                        roll += 1
                        i += 1
                else:
                    if frames[i] != 0 and frames[i+1] == 0:
                        score += frames[i]
                        roll += 1
                        i += 1
                    elif frames[i] == 0 and frames[i+1] != 0:
                        score += frames[i+1]
                        roll += 1
                        i += 1
        else:
            break
    return score