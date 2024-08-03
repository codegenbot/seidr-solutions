```
def bowling(score):
    score = score.replace('/', '')
    frames = [int(x) for x in re.split('(\d+)', score)]
    total_score = 0
    roll = 0
    while len(frames) > 1:
        if frames[0] == 10: # strike
            total_score += 10 + frames[roll+2]
            frames = frames[1:]
            roll += 1
        elif frames[0] + frames[1] >= 10: # spare
            total_score += 10 + frames[roll+3]
            frames = frames[2:]
            roll += 2
        else:
            if frames[0] == 1 and len(frames) > 4 and frames[1] == 1 and frames[2] == 1: # special case for X/X/X
                total_score += 10 + frames[roll+4]
                frames = frames[3:]
                roll += 4
            else:
                total_score += sum(frames[:2])
                frames = frames[2:]
                roll += 2
    if len(frames) == 1: # last frame, only one or two rolls
        total_score += frames[0]
    return total_score