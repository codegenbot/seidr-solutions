```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i*2:i*2+2]:
            frame = list(map(int, frames[i*2:i*2+2].split('/')))
            if sum(frame) == 10:
                score += 10
            else:
                score += sum(frame)
        elif 'X' == frames[i*2]:
            score += 10
        else:
            score += int(frames[i*2])
    return score