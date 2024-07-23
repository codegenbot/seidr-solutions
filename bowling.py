```
def bowling_score(frames):
    score = 0
    frames = [int(x) if x.isdigit() else x for x in frames]
    i = 0
    while i < len(frames):
        if frames[i] == 'X': 
            score += 10 + (frames[i+1] + frames[i+2]) * 10 if i+1 < len(frames) and i+2 < len(frames) else 20
            i += 1
        elif frames[i] == '/':
            score += 10 + frames[i+1]
            i += 2
        else:
            if frames[i] + frames[i+1] >= 10: 
                score += 10
            else: 
                score += frames[i] * 1 + frames[i+1] * 1
            i += 2
    return score