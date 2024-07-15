```
def bonus(roll):
    if roll < 3:
        return 0
    elif roll == 3:
        return 10
    else:
        return 20

def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += 10 + (10 - int(frame[0])) * 2
            roll += 2
        elif len(frame) > 1:
            strike = True if frame[0] == 'X' else False
            if strike:
                score += 10 + bonus(roll)
                roll += 1
            else:
                first_roll = int(frame[0])
                second_roll = int(frame[1])
                if first_roll + second_roll < 10:
                    score += first_roll + second_roll
                    roll += 2
                else:
                    score += first_roll + bonus(roll)
                    roll += 1
        else:
            score += 10
            roll += 1
    return score