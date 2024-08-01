```
def bowling_score(game):
    score = 0
    roll = 0
    frame = 1
    for char in game:
        if char == 'X':
            score += 30
            roll += 10
            frame += 1
        elif char == '/':
            score += 10 + int(roll)
            roll = 0
            frame += 1
        else:
            if int(char) != 10:
                roll += int(char)
            else:
                score += 10 + roll
                roll = 0
                frame += 1
    if roll > 0 and frame < 11:
        score += 10 + roll
    return score