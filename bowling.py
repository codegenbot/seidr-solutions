```
def bowling_score(frames):
    frames = frames.replace('/', ' ').split()
    score = 0
    prev_frame = 0
    for i in range(len(frames)):
        frame = int(frames[i])
        if frame == X:
            score += 10 + prev_frame
        elif frame == -:
            score += 10 - prev_frame
        else:
            if i < 9 and (frame + int(frames[i+1]) == 10 or frame == 10):
                score += 10 + prev_frame
            else:
                score += frame + prev_frame
        prev_frame = frame
    return score