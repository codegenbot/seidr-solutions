```
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 10 + (10 if i < 18 and frames[i+2] == '/' else 0)
            frame += 1
        elif frames[i] == '/':
            first_roll = int(frames[i-1])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame += 1
        else:
            first_roll = int(frames[i])
            if frames[i+1] == 'X':
                score += 10 + first_roll
                frame += 1
            elif frames[i+1] == '/':
                score += first_roll + (10 - first_roll)
                frame += 1
            else:
                score += first_roll + int(frames[i+1])
                frame += 1
    return score