```
def bowling_score(frames):
    score = 0
    roll = [int(x) for x in frames.replace('/', '')]
    for i in range(0, len(roll), 2):
        if roll[i] == 10:
            score += 10 + (10 if i+1 < len(roll) and roll[i+1] != 0 else 0)
        elif roll[i] + roll[i+1] > 10:
            score += 10
        else:
            score += roll[i] + roll[i+1]
    return score