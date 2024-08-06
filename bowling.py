```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i]:
            parts = frames[i].split('/')
            first_roll = int(parts[0])
            second_roll = int(parts[1]) if len(parts) > 1 else 0
            score += min(first_roll, 10) + min(second_roll, 10 - first_roll)
        else:
            score += int(frames[i]) * 2
    return score