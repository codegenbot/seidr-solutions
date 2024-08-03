```
def bowling_score(frames):
    score = 0
    roll = [int(x) for x in re.sub('/|-', '', frames).split()]
    
    for i in range(0, len(roll), 2):
        if roll[i] + roll[i+1] == 10:
            score += 10
        else:
            score += sum(roll[i:i+2])
    
    return score