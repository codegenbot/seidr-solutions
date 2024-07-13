```
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            if frame < 10:
                score += 30
            else:
                score += 10
        elif frames[i] == '/':
            score += int(frames[i+1]) + 10
        else:
            score += int(frames[i:i+2])
        frame += 1
    return score