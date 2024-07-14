```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 30
        elif frames[i] == '/':
            score += int(frames[i+1]) + 10
        else:
            score += int(frames[i:i+2])
    return score