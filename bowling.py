```
def bowling_score(frames):
    frames = frames.replace('/', ' ').split()
    score = 0
    for i in range(0, len(frames), 2):
        frame = [int(x) if x.isdigit() else 10 if x == 'X' else 0 for x in (frames[i], frames[i+1] or '0')]
        if sum(frame) == 10:
            score += 10
        elif len(frame) == 1:
            score += 10
        else:
            score += sum(frame)
    return score