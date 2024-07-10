```
def bowling_score(frames):
    score = 0
    frame = 0
    for i in range(len(frames)):
        if frames[i].isdigit():
            if len(frames[i]) == 1:
                score += int(frames[i])
            else:
                if int(frames[i][0]) == 10:
                    score += 10 + (10 - int(frames[i][1:]))
                else:
                    score += int(frames[i][0]) + int(frames[i][1:])
        elif frames[i] == 'X':
            score += 10
            frame += 1
        elif frames[i] == '-':
            continue
    return score