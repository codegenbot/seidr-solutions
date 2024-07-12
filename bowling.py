```
def bowling_score(frames):
    score = 0
    roll = []
    for frame in frames.split('/'):
        if '-' in frame:
            strike = True
            spare = False
        elif int(frame) == 10:
            strike = True
            spare = False
        else:
            strike = False
            spare = False
        if strike:
            score += 10 + (10 - len(roll)) * 10
            roll = []
        elif spare:
            score += 10 + int(frame)
            roll = []
        else:
            score += int(frame) + (10 - len(roll))
            roll.append(int(frame))
    return score