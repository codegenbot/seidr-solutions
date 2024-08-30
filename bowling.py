```
def bowling_score(score):
    score = score.replace('/', '')
    frames = [int(x) for x in score]
    total = 0
    roll = 0
    
    for i in range(10):
        if i < 9 and frames[i] == 10:
            total += 10 + frames[i+1] if i+1 < 10 else 10
            roll += 2
            i += 1
        elif i < 9 and frames[i] != 10:
            total += min(frames[i], 10) + (10 - frames[i]) if roll > 0 else frames[i]
            roll = max(roll, 1)
        else:
            total += frames[i]
    
    return total