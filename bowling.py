Here is the Python solution:

def bowling_score(gutter_balls):
    score = 0
    frames = gutter_balls.split('/')
    for i in range(len(frames)):
        if len(frames[i]) == 1:
            score += 10 - (9 - i)
        else:
            first_roll = int(frames[i][0])
            second_roll = int(frames[i][1])
            if first_roll + second_roll >= 10:
                score += 10
            else:
                score += first_roll + second_roll
    return score