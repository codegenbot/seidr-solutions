```
def bowling_score(frames):
    score = 0
    roll = [int(x) for x in frames.replace('/', '')]
    for i in range(0, len(roll), 2):
        if i + 1 < len(roll) and roll[i] == 10:
            score += 10 + roll[i+1]
        elif roll[i] + roll[i+1] < 11:
            score += roll[i] + roll[i+1]
        else:
            score += 10
    return score