def bowling_score(frames):
    score = 0
    strike = False
    spare = 0

    for frame in frames.split('/'):
        if len(frame) == 1:  
            score += 10
        elif 'X' in frame:  
            score += 10
            strike = True
        else:
            roll = int(frame[0]) + (int(frame[1]) if len(frame) > 1 else 0)
            if len(frame) == 2 and roll >= 10:  
                score += roll + 1
            elif 'X' in frame:  
                score += 10
                strike = True
            else:
                spare = roll

        if strike:
            continue
        elif spare > 0:
            score += spare

    return score