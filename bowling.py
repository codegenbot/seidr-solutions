```
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 10 + (10 if i + 3 < len(frames) and frames[i+1] == '/' else 0)
        elif frames[i] == '/':
            score += 10
        else:
            first_roll = int(frames[i])
            second_roll = int(frames[i+1].lstrip('/'))
            if first_roll + second_roll == 10:
                score += first_roll + 10
            else:
                score += first_roll + second_roll
        frame += 1
    return score