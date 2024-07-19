```
def bowling_score(frames):
    score = 0
    frame = 1
    i = 0
    while i < len(frames):
        if frames[i].isdigit():
            count = 0
            while i + 1 < len(frames) and frames[i+1].isdigit():
                count = count * 10 + int(frames[i])
                i += 1
            score += count
            frame += 1
        elif frames[i] == '/':
            if int(frames[i-1]) + int(frames[i+1]) > 10:
                score += 10
            else:
                score += 10 - int(frames[i-1]) - int(frames[i+1])
            frame += 1
        i += 1
    return score