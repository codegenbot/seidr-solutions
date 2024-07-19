```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i].isdigit():
            score += int(frames[i])
            if i < len(frames) - 1 and frames[i+1] == '/':
                score += 10 - int(frames[i])
                i += 2
            elif i < len(frames) - 1 and frames[i+1].isdigit() and int(frames[i]) + int(frames[i+1]) <= 10:
                score += 10
                i += 2
            else:
                if i < len(frames) - 1 and frames[i+1] == 'X':
                    score += 10 + int(frames[i])
                    i += 2
                else:
                    score += int(frames[i])
                    i += 1
        elif frames[i] == 'X':
            score += 10 + int(frames[i-1])
            i += 1
        elif frames[i] == '/':
            score += 10 - int(frames[i-1])
            i += 1
    return score