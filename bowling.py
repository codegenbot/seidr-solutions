```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i] == 'X':
            score += 30
        elif frames[i].isdigit():
            if len(frames[i]) > 1:
                first_roll = int(frames[i][0])
                second_roll = 10 - first_roll
                score += first_roll + second_roll
            else:
                score += int(frames[i])
        else:
            first_roll = int(frames[i][:1])
            second_roll = 10 - first_roll
            if frames[i][1] == '/':
                score += first_roll + second_roll
            elif len(frames[i]) > 2 and frames[i][2].isdigit():
                third_roll = int(frames[i][2:])
                score += first_roll + second_roll + third_roll
    return score