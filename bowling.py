```
def bowling_score(frames):
    score = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += 10
        elif len(frame) > 1 and frame[0] != 'X':
            score += int(''.join(frame))
        else:
            if score < 10:
                score += 10
            else:
                score += int(frame[0])
    return score