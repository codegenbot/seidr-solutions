```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i] == 'X':
            score += 30
        elif frames[i] == '//':
            score += 20
        else:
            parts = frames[i].split('/')
            if len(parts) > 1:
                first, second = map(int, parts)
                if i < 9 and frames[i+1] != 'X':
                    score += first + (10 - first)
                else:
                    score += min(first, 10)
                if i < 9:
                    if frames[i+1].startswith('X'):
                        score += second
                    elif len(frames[i+1]) == 2:
                        score += second
            else:
                score += int(parts[0])
    return score