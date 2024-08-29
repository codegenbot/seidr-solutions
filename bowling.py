```
def bowling_score(game):
    score = 0
    roll = 0
    frame = 0
    
    for char in game:
        if char == 'X':
            score += 30
            roll = 2
        elif char == '/':
            score += 10 + (roll - 1) * 10
            roll = 0
        elif char.isdigit():
            if int(char) < 10:
                score += int(char) * 10
                roll = 1
            else:
                score += 10 + (roll - 1) * 10
                roll = 0
        else:
            if frame == 9 and roll > 1:
                score += 10 + (roll - 2) * 10
            elif char == '-':
                score += 10
                roll = 0
            roll += 1
        frame += 1
    
    return score