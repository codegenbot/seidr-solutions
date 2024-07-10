```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == 'X':  
            score += 10 + int(frames[i+2]) + int(frames[i+3])
            i += 1
        elif frames[i] in ['/', '/X']:  
            if frames[i] == '/':
                score += 10 + int(frames[i+1])
            else:
                score += 20 + int(frames[i+2])
            i += 2
        elif frames[i].isdigit() and frames[i+1].isdigit():
            score += int(frames[i]) + int(frames[i+1])
            i += 2
        i += 1
    return score