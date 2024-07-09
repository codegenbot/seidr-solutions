```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == '-':
            score += 10 + int(frames[i+2])
            i += 3
        elif int(frames[i]) + int(frames[i+1]) == 10:
            score += 10
            i += 2
        else:
            score += int(frames[i]) + int(frames[i+1])
            i += 2
    return score