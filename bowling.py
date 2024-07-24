```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i]:
            parts = frames[i].split('/')
            if len(parts) == 2:
                score += min(int(parts[0]), 10)
                if int(parts[0]) < 10:
                    score += 10 - int(parts[0])
            else:
                score += 10
        else:
            score += int(frames[i])
    return score