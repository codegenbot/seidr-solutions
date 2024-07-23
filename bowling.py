```
def bowling_score(frames):
    score = 0
    frame = 1
    i = 0
    while i < len(frames):
        if frames[i].isdigit():
            if len(frames[i:i+2]) == 2:
                first_roll = int(frames[i])
                second_roll = int(frames[i+1])
                if first_roll + second_roll == 10:
                    score += 10
                    frame += 1
                    i += 2
                else:
                    score += first_roll + second_roll
                    frame += 1
                    i += 2
            elif len(frames[i:i+3]) == 3:
                if int(frames[i:i+3]) == 10:
                    score += 10
                    frame += 1
                    i += 2
                else:
                    first_roll = int(frames[i:i+1])
                    second_roll = int(frames[i+1:i+2])
                    third_roll = int(frames[i+2:i+3])
                    if first_roll + second_roll + third_roll == 10:
                        score += 10
                        frame += 1
                        i += 3
                    else:
                        score += first_roll + second_roll + third_roll
                        frame += 1
                        i += 3
            else:
                score += int(frames[i])
                if frames[i+1] == '/':
                    score += 10 - (10 - int(frames[i]))
                    frame += 1
                    i += 2
                else:
                    score += int(frames[i])
                    frame += 1
                    i += 1
        elif frames[i] == '/':
            if len(frames[i-1:i]) == 1:
                first_roll = int(frames[i-1])
                if 10 - first_roll < 0:
                    score += 10
                    frame += 1
                    i += 2
                else:
                    score += 10 - (10 - first_roll)
                    frame += 1
                    i += 1
            elif len(frames[i-1:i+1]) == 2:
                first_roll = int(frames[i-1])
                second_roll = int(frames[i])
                if first_roll + second_roll == 10:
                    score += 10
                    frame += 1
                    i += 2
                else:
                    score += first_roll + second_roll
                    frame += 1
                    i += 2
    return score