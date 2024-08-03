```
def bowling_score(frames):
    score = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += 10
        elif frame[0] != 'X':
            strike = int(frame[0])
            spare = int(frame[1])
            score += strike + spare
        else:
            score += 10
    return score