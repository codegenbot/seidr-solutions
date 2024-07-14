```
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i].isdigit() and frames[i+1].isdigit():
            if int(frames[i]) + int(frames[i+1]) == 10:
                if frame < 9:
                    score += 10
                else:
                    if int(frames[i]) != 10:
                        score += 10
                    elif len(frames) > i+2 and frames[i+2].isdigit() and int(frames[i+2]) + int(frames[i+1]) == 10:
                        score += 20
                    else:
                        score += 10
            else:
                score += int(frames[i]) + int(frames[i+1])
        elif frames[i] == 'X':
            if frame < 9:
                score += 10
            else:
                score += 10
        elif frames[i] == '/':
            if int(frames[i-1].isdigit()):
                score += int(frames[i-1])
        frame += 1
    return score