```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i*2:i*2+2]:
            frame = list(map(int, frames[i*2:i*2+2].split('/')))
            score += sum(frame)
        else:
            score += int(frames[i*2])
    return score