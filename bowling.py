```
def bowling_score(frames):
    score = 0
    frame = 0
    for i in range(len(frames)):
        if frames[i].isdigit():
            if len(frames[i]) == 1:
                score += int(frames[i])
            else:
                while i < len(frames) and not frames[i+1].isdigit():
                    i += 1
                score += int(frames[i:i+2])
                frame += 1
        elif frames[i] == 'X':
            score += 10 + (10 - (frame % 2))
            frame += 1
        else:
            if frames[i] in ['/', '-']:
                i += 1
            while i < len(frames) and not frames[i].isdigit():
                i += 1
            score += int(frames[i])
    return score