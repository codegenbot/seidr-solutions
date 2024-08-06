```
def bowling_score(frames):
    score = 0
    frame = 0
    for i in range(len(frames)):
        if frames[i] == 'X':
            if frame < 9:
                score += 30
            else:
                score += 10 + int(frames[i-1])
            frame += 1
        elif frames[i] == '/':
            first_roll = int(frames[:i].split('/')[0])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame += 1
        else:
            if frame < 9 and len(frames[i:]) >= 2 and frames[i:i+2] == 'XX':
                score += 30
                frame += 1
            elif frame < 9 and int(frames[i]) + int(frames[i+1]) <= 10:
                first_roll = int(frames[i])
                second_roll = 10 - first_roll
                score += first_roll + second_roll
                frame += 1
            else:
                score += int(frames[i])
                frame += 1
    return score