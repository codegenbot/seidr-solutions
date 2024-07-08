```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            score += 30
            i += 1
            if i < len(frames) and frames[i] in ['X', '/']:
                score += int(frames[i])
            elif i < len(frames):
                score += 10 + int(frames[i])
        elif frames[i] == '/':
            score += 10
            i += 2
        else:
            total = 0
            for j in range(i, min(i+3, len(frames))):
                if frames[j] == 'X':
                    total += 30
                    break
                total += int(frames[j])
            if total > 10:
                score += 10 + int(frames[i+1])
                i += 2
            else:
                score += total
                i += 2
    return score