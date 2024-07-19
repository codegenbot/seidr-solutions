```
def bowling_score(frames):
    score = 0
    frame = 1
    i = 0
    while i < len(frames):
        if frames[i].isdigit():
            if frame == 10:
                break
            score += int(frames[i])
            frame += 1
        elif frames[i] == '/':
            score += 10 - (int(frames[i-1]) + int(frames[i+1]))
            frame += 1
        i += 1
    return score