```
def bowling_score(frames):
    score = 0
    roll = []
    for frame in frames.split('/'):
        if len(frame) == 1:
            roll.append(int(frame))
        else:
            a, b = map(int, frame)
            roll.extend([a, b])
    for i in range(0, len(roll), 2):
        if roll[i] + roll[i+1] == 10:
            score += 10
        elif roll[i] == 10:
            score += 10 + roll[i+1]
        else:
            score += roll[i] + roll[i+1]
    return score