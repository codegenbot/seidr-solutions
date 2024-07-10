```
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i].isdigit() and frames[i+1].isdigit():
            if int(frames[i]) + int(frames[i+1]) == 10:
                if frame < 9:
                    score += 10
                    frame += 1
                else:
                    score += 10
            elif int(frames[i]) + int(frames[i+1]) > 10:
                score += 10 - (int(frames[i]) + int(frames[i+1]))
                if frame < 9:
                    score += int(frames[i])
                    frame += 1
        elif frames[i].isdigit():
            score += int(frames[i])
            frame += 1
    return score