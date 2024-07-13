```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == 'X':  
            score += 10 + int(frames[i+2]) + int(frames[i+3])
            i += 3
        elif frames[i] == '/':
            score += 10 + int(frames[i+1])  
            i += 2
        else:  
            if i < len(frames) - 1 and frames[i+1] == 'X':
                score += int(frames[i]) + 10
                i += 2
            elif frames[i+1] == '/':
                score += int(frames[i]) + 10
                i += 2
            else:
                score += int(frames[i]) + int(frames[i+1])
                i += 2
    return score