```
def bowling_score(frames):
    score = 0
    frames = [int(x) if x.isdigit() else x for x in frames]
    i = 0
    while i < len(frames):
        if frames[i] == 'X': 
            if i+1 < len(frames) and i+2 < len(len(frames)) and frames[i+1] == 'X':
                score += 30
            elif i+1 < len(frames) and frames[i+1] == 'X':
                score += 20 + int(frames[i+2]) * 10
            else:
                score += 10
            i += 1
        elif frames[i] == '/':
            if int(frames[i+1]) >= 10:
                score += 15
            else:
                score += 10 + int(frames[i+1]) * 1
            i += 2
        else:
            score += int(frames[i]) * 1 + int(frames[i+1]) * 1
            i += 2
    return score