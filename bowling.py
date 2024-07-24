```
def bowling_score(s):
    score = 0
    roll = 0
    for frame in s.split('/'):
        if len(frame) == 1:
            score += 10 + (10 - int(frame)) * (1 if roll < 9 else 2)
            roll += 1
        elif len(frame) > 1 and frame[0].isdigit():
            a = int(frame[0])
            b = int(frame[1]) if len(frame) == 2 else 10
            score += a + b
            if b == 10:
                roll += 1
            elif roll < 9:
                roll += 1
        else:
            a, b = map(int, frame.split('X'))
            score += a + b
            if a == 10 and len(s) - s.index(frame) > 2:
                return -1
            roll += 1
    return score