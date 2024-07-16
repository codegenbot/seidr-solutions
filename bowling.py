```
def bowling_score(game):
    score = 0
    roll = 0
    frame = 1
    for char in game + 'X':
        if char == '/':
            score += min(10 - roll, 10)
            roll = 0
            frame += 1
        elif char == 'X':
            score += 10
            roll = 0
            frame += 1
        else:
            if roll == 1:
                score += max(int(char), 0) + min(10 - int(char), 10)
            else:
                roll += int(char)
    return score