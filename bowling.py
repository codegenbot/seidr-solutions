```
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(len(frames)):
        if frames[i].isdigit():
            score += int(frames[i])
            if frame == 10:
                break
            frame += 1
        elif frames[i] == '/':
            spare = int(frames[i-1]) + int(frames[i+1])
            score += 10 - spare
            frame += 1
    return score