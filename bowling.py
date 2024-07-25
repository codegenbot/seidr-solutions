Here is the solution:

def bowling(score):
    frames = score.split('/')
    score = 0
    for i in range(len(frames)):
        if len(frames[i]) == 1:
            score += int(frames[i])
        elif len(frames[i]) == 2:
            score += int(frames[i][0]) + int(frames[i][1])
        else:
            first_roll = int(frames[i][0])
            second_roll = int(frames[i][1])
            third_roll = int(frames[i][2])
            if first_roll + second_roll == 10:
                score += first_roll + third_roll
            elif second_roll == 10:
                score += first_roll + 10
            else:
                score += first_roll + second_roll
    return score