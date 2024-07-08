```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 10
            if i < 9:
                score += int(frames[2*i+3]) + int(frames[2*i+4])
        elif frames[i] == '/':
            score += 10
            score += int(frames[2*i+1])
        else:
            score += int(frames[i]) + int(frames[i+1])
    return score