```
def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += 10 + (10 - int(frame)) * (roll > 0)
            roll = 0
        elif len(frame) == 2:
            if int(frame[0]) == 10:
                score += 10 + (10 - int(frame[1])) * (roll > 0)
                roll = 0
            else:
                score += sum(map(int, frame)) + (10 - sum(map(int, frame))) * (roll > 0)
                roll = 0
        elif len(frame) == 3:
            if int(frame[0]) == 10:
                score += 10 + sum(map(int, frame[1:]))
                roll = 0
            else:
                score += sum(map(int, frame)) + (10 - sum(map(int, frame))) * (roll > 0)
                roll = 0
        roll += 1
    return score