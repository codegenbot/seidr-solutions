```
def bowling_score(s):
    score = 0
    roll = 0
    frames = s.split('/')
    for i in range(len(frames)):
        if len(frames[i]) == 1:
            if roll < 2:
                score += int(frames[i])
                roll += 1
            else:
                score += max(int(frames[i]), 10 - (10 - sum(map(int, frames[i-3:i]))))
                roll = 0
        else:
            score += sum(map(int, frames[i]))
            roll = 0
    return score