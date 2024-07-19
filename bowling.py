```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit():
            if frames[i+1] == '/':
                score += 10 - int(frames[i])
            else:
                score += int(frames[i]) + int(frames[i+1])
        elif frames[i] == '/':
            score += 10
    return score