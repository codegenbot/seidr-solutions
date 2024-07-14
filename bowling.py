```
def bowling(score):
    score = score.replace("/", "-")
    frames = [list(map(int, frame.split("-"))) for frame in score.split()]
    total = 0
    for i, frame in enumerate(frames):
        if len(frame) == 1:
            total += frame[0]
        elif len(frame) == 2:
            if sum(frame) >= 10:
                total += sum(frame)
            else:
                total += 10
        else:
            total += 10 + frames[i-1][0] if i > 0 and frames[i-1][0] in frame else 10
    return total