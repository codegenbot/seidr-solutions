```
def bowling_score(rolls):
    score = 0
    roll = 0
    frame = 1
    
    for x in rolls + '/':
        if x == '/':
            score += min(10, roll) * 2
            roll = 0
            frame += 1
        else:
            roll += int(x)
    
    if roll > 0:
        score += min(10, roll) * 2
    
    return score