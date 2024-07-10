def bowling_score(gutter_balls):
    score = 0
    frame = 1
    for ball in gutter_balls + "/":
        if ball == "X":
            score += 30
            frame += 1
        elif ball == "/":
            score += 10
            frame += 1
        else:
            if len(ball) > 1:
                score += int(ball[0]) * 10 + 10
            else:
                score += int(ball)
            frame += ball != "0"
    return score