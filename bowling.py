```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i]:
            parts = frames[i].split('/')
            score += int(parts[0]) + int(parts[1])
        else:
            score += len(frames[i]) * 10
    return score