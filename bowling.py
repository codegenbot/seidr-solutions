```
def bowling_score(score_string):
    score = 0
    roll = 0
    frame = 1
    
    for char in score_string:
        if char.isdigit():
            roll = int(char)
        elif char == '/':
            if roll > 10:
                return 'Invalid input'
            else:
                score += min(roll, 10) * 10
                if roll < 10:
                    score += next(i for i in range(min(roll, 10), 11))
                roll = 0
        elif char == 'X':
            score += 30
            roll = 0
            frame -= 1
        elif char.lower() == 'x':
            if frame > 9:
                return 'Invalid input'
            else:
                score += 10
                roll = 0
                frame -= 1
    
    return score