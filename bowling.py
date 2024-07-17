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
                    score += 10 + (10 - 2) * (9 - frame)
                    frame += 1
                else:
                    first_roll = int(frames[i][0])
                    second_roll = 10 - first_roll
                    if frames[i+1].isdigit() and int(frames[i+1]) == second_roll:
                        score += 10 + 10
                        i += 1
                        continue
                    score += first_roll + second_roll
        else:
            if frames[i] == 'X':
                score += 10 + (10 - 2) * (9 - frame)
                frame += 1
            elif frames[i] == '-':
                continue
    return score