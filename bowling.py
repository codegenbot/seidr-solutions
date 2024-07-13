```
def bowling_score(frames):
    score = 0
    roll = [int(x) for x in frames.replace('/', '')]
    for i in range(0, 10):
        if i < len(roll) and roll[i] == 10:
            score += 10 + (i+1)*10
            if i >= 10:
                break
        elif i < len(roll) and sum(roll[i:i+2]) > 10:
            score += 10 + sum(roll[i:i+2])
            if i == 9:
                break
        else:
            score += sum(roll[i:i+1])
    return score