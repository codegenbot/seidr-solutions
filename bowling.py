```
def bowling_score(frames):
    score = 0
    roll = [int(x) for x in frames.replace('/','-').replace('X', '10')]
    for i in range(0, 10, 2):
        if roll[i] == 10:
            score += roll[i]
            if i < 8:
                if roll[i+1] == 0:
                    score += 10
                else:
                    score += roll[i+1]
        elif roll[i] + roll[i+1] == 10:
            score += roll[i] + roll[i+1]
        else:
            score += roll[i] + roll[i+1]
    return score