```
def bowling_score(frames):
    score = 0
    frame = 0
    for i in range(len(frames)):
        if frames[i].isdigit():
            if len(frames[i]) == 1:
                score += int(frames[i])
            else:
                if int(frames[i]) == 10:
                    score += 10 + 10
                    frame += 2
                else:
                    first_roll = int(frames[i][:1])
                    second_roll = int(frames[i][1:])
                    score += first_roll + second_roll
                    frame += 1
        elif frames[i] == 'X':
            score += 10 + 10 if frame < 9 else 10
            frame += 2
        elif frames[i] == '-':
            continue
    return score