```
def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split('/')):
        if len(frame) == 1:
            if i < 9 and frames[i+1].isdigit():
                score += int(frame) + int(frames[i+1])
            else:
                score += int(frame)
        elif len(frame) == 2:
            score += sum(int(x) for x in frame)
        elif len(frame) == 3:
            if i < 9 and frames[i+1].isdigit():
                score += 10 + int(frames[i+1])
            else:
                score += 10
    return score