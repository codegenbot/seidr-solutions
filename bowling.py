```
def bowling_score(frames):
    score = 0
    frames = [list(map(int, frame.split())) for frame in frames.replace('/', '').split()]
    
    for i, frame in enumerate(frames):
        if len(frame) == 1:
            score += 10 + (10 - frame[0] + frames[i+1][0]) if i < 9 else 10
        elif len(frame) == 2 and sum(frame) == 10:
            score += 10 + (frames[i+1][0] if i < 8 else 0)
        else:
            score += sum(frame)
    
    return score