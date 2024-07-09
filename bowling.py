```
def bowling_score(score):
    score = score.replace("/", "-")
    frames = [list(map(int, frame.split("-"))) for frame in score.split("X")]
    if len(frames) < 10:
        while len(frames) < 10:
            frames.append([1])
    total = 0
    for i, frame in enumerate(frames):
        if len(frame) == 2 and frame[1] != 10:
            if frame[0] + 10 - frame[1] > 10:
                total += 10 + sum(frames[i+1:i+3])
            else:
                total += 10
        elif len(frame) == 1 and frame[0] == 10:
            total += 10 + sum(frames[i+1:i+2])
        else:
            total += sum(frame)
    return total