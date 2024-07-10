```
def bowling_score(gutter_ball):
    frames = gutter_ball.split('/')
    score = 0
    for i in range(len(frames)):
        if len(frames[i]) == 1: 
            score += 10 - int(frames[i])
        elif len(frames[i]) > 1:
            score += (int(frames[i][0]) + int(frames[i][1]))*2
        else:
            if i < 9:
                score += 10
    return score