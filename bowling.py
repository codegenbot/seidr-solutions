```
def bowling_score(frames):
    score = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += 10
        elif 'X' in frame:
            score += 10 + (10 - int(frame.replace('X', '')))
        else:
            ones = int(frame[0])
            twos = 10 - ones
            score += ones * 2 + max(ones, twos)
    return score