```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i*2:i*2+2]:
            frame_score = list(map(int, frames[i*2:i*2+2].split('/')))
            if len(frame_score) == 1:
                score += 10
            else:
                score += sum(frame_score)
        else:
            score += int(frames[i*2])
    return score