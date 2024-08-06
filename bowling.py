```
def bowling_score(s):
    score = 0
    roll = 0
    for frame in s.split('/'):
        if len(frame) == 1:
            score += 10
            roll += 1
        elif int(frame) == 10:
            score += 10 + (10 - int(frame[0])) * 2
            roll += 2
        else:
            score += sum(map(int, frame))
            roll += len(frame)
    if roll < 10:
        if s.count('X') > 0 or any(c.isdigit() for c in s[-1]):
            return score
    while roll < 10 and score >= 15:
        if str(score).endswith('10'):
            score -= 10
            roll += 1
        else:
            score -= sum(map(int, str(score)[-2:]))
            roll += 2
    return score