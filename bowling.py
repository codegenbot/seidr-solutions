```
def bowling_score(frames):
    score = 0
    frame_count = 0
    for frame in frames.split('/'):
        if len(frame) == 1 or (len(frame) > 1 and int(frame[0]) < 10):
            score += sum(map(int, frame))
        else:
            score += 10 + sum(map(int, frame[1:]))
        frame_count += 1
    return score