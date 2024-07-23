def bowling_score(frames):
    score = 0
    for i in range(10):
        if len(frames[i]) == 1:
            if frames[i] == 'X':
                score += 30
            elif frames[i].startswith('//'):
                score += 20
            else:
                score += int(frames[i])
        else:
            first, second = map(int, frames[i].split('/'))
            score += first + (10 - first) if i < 9 and len(frames[i+1]) == 1 or frames[i+1] == 'X' else min(first, 10)
            if i < 9 and len(frames[i+1]) > 1:
                score += second
    return score