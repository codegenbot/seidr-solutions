```
def bowling_score(game):
    score = 0
    roll = 0
    frame = 0
    for char in game:
        if char == 'X':
            score += 30
            roll += 3
            frame += 1
        elif char == '/':
            continue
        else:
            score += int(char)
            roll += 1
        if roll >= 10 and frame < 9:
            score += (10 - int(char)) * 2
    return score