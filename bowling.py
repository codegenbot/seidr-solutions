```
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 10
            if frame < 9:
                score += int(frames[2*i+4]) if frames[2*i+4] != 'X' and frames[2*i+4] != '/' else 10
        elif frames[i] == '/':
            score += 10
            score += int(frames[2*i+3])
        else:
            score += int(frames[i]) + int(frames[i+1])
        frame += 1
    return score