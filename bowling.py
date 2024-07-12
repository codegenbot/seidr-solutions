```
def bowling_score(frames):
    frames = frames.replace('/', '').split()
    score = 0
    prev_frame = [0, 0]
    for frame in map(int, frames):
        if frame == 10:
            score += 10 + prev_frame[0] + prev_frame[1]
            prev_frame = [0, 0]
        elif frame == -1:
            score += sum(prev_frame) + 10
            prev_frame = [0, 0]
        else:
            if len(prev_frame) > 0:
                score += sum(prev_frame) + frame
            if frame >= 2:
                score += 10
            prev_frame = [frame]
    return score