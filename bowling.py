```
def bowling_score(frames):
    score = 0
    roll = [int(x) for x in frames.split()]
    for i in range(0, 20, 2):
        if roll[i] == 10: 
            score += 10
            score += roll[i + 1]
            if i < 17:
                score += roll[i + 2]
        elif roll[i] + roll[i + 1] == 10:
            score += 10
        else:
            score += roll[i]
            score += roll[i + 1]
    return score