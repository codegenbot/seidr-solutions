```
def bowling_score(frames):
    score = 0
    roll = [int(x) for x in frames.replace('/', '00').replace('X', '33')]
    for i in range(10):
        if roll[i*2] == 10:
            score += 30
        elif roll[i*2:i*2+3].count('3') > 0:
            score += 30
        else:
            score += sum(roll[i*2:i*2+2])
    return score