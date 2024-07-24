```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i]:
            parts = frames[i].split('/')
            if len(parts) == 2:
                score += int(parts[0]) + int(parts[1])
            else:
                score += int(parts[0])
        elif frames[i] == 'X':
            score += 30
        elif frames[i] == '-':
            continue
        else:
            score += int(frames[i])
    return score