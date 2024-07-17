```
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i].isdigit():
            if int(frames[i]) == 10:
                score += 10 + (10 if i+1 < len(frames) and frames[i+1].isdigit() else 0)
                frame += 1
            elif int(frames[i]) + int(frames[i+1]) <= 10:
                score += int(frames[i]) + int(frames[i+1])
                frame += 1
            else:
                score += 10
                frame += 1
                if i+3 < len(frames) and frames[i+2].isdigit() and frames[i+1] == '/':
                    score += int(frames[i+2])
                    frame += 1
        elif frames[i] == 'X':
            score += 10
            frame += 1
        else:
            if i+1 < len(frames) and frames[i+1].isdigit():
                score += int(frames[i]) + int(frames[i+1])
                frame += 1
            else:
                score += 10
                frame += 1
    return score