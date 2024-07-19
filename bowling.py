```
def bowling_score(frames):
    score = 0
    frame = 1
    i = 0
    while i < len(frames):
        if frames[i].isdigit():
            roll = int(frames[i])
            i += 1
            if i < len(frames) and frames[i] == '/':
                i += 1
                roll += int(frames[i])
                i += 1
            score += roll
            frame += 1
        elif frames[i] == '/':
            roll = 10 - (int(frames[i-1]) + int(frames[i+1]))
            score += roll
            i += 3
    return score