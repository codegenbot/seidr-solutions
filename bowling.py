```
def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split('/')):
        if len(frame) == 1:
            score += 10 + (10 - i)
        elif len(frame) > 1 and int(frame[0]) * 10 + int(frame[1:]) <= 10:
            score += 10
        else:
            if i < 9:
                score += sum(int(x) for x in frame)
            else:
                score += sum(int(x) for x in frame[:2])
    return score