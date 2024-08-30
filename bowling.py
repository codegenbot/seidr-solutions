```
def bowling_score(bowling_game):
    score = 0
    roll = 0
    frame = 0
    for x in bowling_game:
        if x == 'X':
            score += 30
            roll += 10
            frame += 1
        elif x == '/':
            score += 10
            roll += 10
            frame += 1
        else:
            points = int(x)
            score += points
            roll += 1
            if roll >= 10:
                break
    return score