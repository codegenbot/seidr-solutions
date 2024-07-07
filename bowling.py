```
def bowling_score(frames):
    score = 0
    frame = 0
    for i in range(len(frames)):
        if frames[i].isdigit():
            strike = False
            while i < len(frames) and frames[i].isdigit():
                i += 1
            if i < len(frames) and frames[i] == '/':
                score += 10
                frame += 1
                i += 1
            else:
                score += int(frames[i-1:i])
                frame += 1
        elif frames[i] == 'X':
            strike = True
            score += 10
            frame += 1
        elif frames[i] == '-':
            if strike:
                strike = False
            else:
                i += 1
    while frame < 10 and (strike or int(frames[frame-1:frame]) + int(frames[frame:frame+1]) > 10):
        score += 10
        frame += 1
    return score