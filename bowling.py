```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            if i < 8:
                score += 30
            else:
                score += 10 + int(frames[8]) + int(frames[9])
        elif frames[i:i+2] == 'XX':
            score += 20
        elif frames[i] != '/':
            score += int(frames[i])
        if i < 9 and frames[i] != 'X' and frames[i] != '/':
            score += int(frames[i+1])
    return score