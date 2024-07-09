```
def bowling_score(frames):
    score = 0
    frames = [int(frame) for frame in frames.split('/')]
    for i in range(0, len(frames), 2):
        if frames[i] + frames[i+1] == 10:
            if i < 9 and frames[i+2] != 0:
                score += 10
            else:
                score += 10
        else:
            score += frames[i] + frames[i+1]
    return score