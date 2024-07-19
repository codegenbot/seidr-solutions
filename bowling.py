```
def bowling_score(frames):
    score = 0
    frame = 1
    i = 0
    while i < len(frames):
        if frames[i].isdigit():
            if frame < 10:
                if i + 1 < len(frames) and frames[i + 1].isdigit():
                    score += int(frames[i]) + int(frames[i + 1])
                    frame += 1
                    i += 2
                else:
                    score += int(frames[i])
                    frame += 1
                    i += 1
            else:
                score += int(frames[i])
        elif frames[i] == '/':
            if i > 0 and frames[i - 1].isdigit():
                score += 10 - int(frames[i - 1])
            frame += 1
            i += 1
    return score