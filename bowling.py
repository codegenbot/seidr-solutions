```
def bowling_score(gutter_balls):
    score = 0
    roll = 0
    frame = 1
    for ball in gutter_balls:
        if ball == 'X':
            score += 10 + (10 - roll)
            roll = 0
            frame += 1
        elif ball == '/':
            score += 10 - roll
            roll = 0
            frame += 1
        else:
            roll += int(ball)
    return score