```
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i].isdigit() and frames[i+1].isdigit():
            strike = False
            spare = False
            if int(frames[i]) + int(frames[i+1]) == 10:
                spare = True
            elif int(frames[i]) == 10:
                strike = True
            else:
                score += int(frames[i]) + int(frames[i+1])
            while frame < 10 and (strike or spare):
                if i+2 < len(frames) and frames[i+2].isdigit():
                    if strike:
                        score += 10 + int(frames[i+2])
                        frame += 1
                    elif spare:
                        score += 10 + int(frames[i+2])
                        frame += 1
                        break
                    else:
                        score += int(frames[i+2])
                        frame += 1
                i += 1
        elif frames[i] == 'X':
            strike = True
            score += 10
            frame += 1
        else:
            if spare:
                score += 10
                frame += 1
                break
            score += int(frames[i])
            frame += 1
    return score