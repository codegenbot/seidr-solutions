```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i*2:i*2+2]:
            x = frames[i*2:i*2+2].index('/')
            if x == 0:
                score += 10
            else:
                score += int(frames[i*2]) + int(frames[i*2+1][:x])
        elif 'X' in frames[i*2:i*2+2]:
            score += 10
        else:
            x = sum(map(int, frames[i*2:i*2+2]))
            if x <= 10:
                score += x
    return score