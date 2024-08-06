```
def bowling_score(s):
    frames = [list(map(int, re.findall('\d', i))) for i in s.split('/')]
    score = 0
    for i, frame in enumerate(frames):
        if len(frame) == 1:
            score += 10
        elif sum(frame) >= 10:
            if len(frame) == 2 and sum(frame) == 10:
                score += 10
            else:
                score += sum(frame)
        else:
            score += sum(frame)
    return score