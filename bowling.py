```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            if i < 9:
                score += 30 + int(frames[8])
            else:
                score += 30
        elif frames[i] == '/':
            score += 10 + int(frames[i+1])
        else:
            score += int(frames[i]) + int(frames[i+1])
    return score