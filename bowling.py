```
def bowling_score(frames):
    score = 0
    frames = [int(x) if x.isdigit() else '0' for x in frames]
    i = 0
    while i < len(frames):
        if frames[i] == '10':
            score += 10 + (frames[i+1].isdigit() and int(frames[i+1]) * 10 or 0)
            i += 2
        elif frames[i] == '/':
            score += 10 + int(frames[i+1])
            i += 2
        else:
            if frames[i] + frames[i+1] >= '10':
                score += 10
            else:
                score += int(frames[i]) * 1 + int(frames[i+1]) * 1
            i += 2
    return score