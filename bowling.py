```
def bowling_score(s):
    score = 0
    roll = 0
    frame = 0
    
    for char in s:
        if char.isdigit():
            roll += int(char)
        elif char == '/':
            if roll < 10:
                score += 10 - roll
            else:
                score += 30
            roll = 0
            frame += 1
        elif char == 'X' or char == '-':
            if roll < 10:
                score += 10 - roll
            else:
                score += 30
            roll = 0
            frame += 1
            
    if roll > 0 and roll < 10:
        score += 10 - roll
    elif roll >= 10:
        score += 30
        
    return score