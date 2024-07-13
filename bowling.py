```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i*2:i*2+2]:
            frame = list(map(int, frames[i*2:i*2+2].split('/')))
            if sum(frame) == 10:
                if len(frame) > 1:
                    score += 10
                else:
                    score += 10 + int(frames[i*2+1])
            else:
                score += sum(frame)
        elif 'X' == frames[i*2]:
            if i < 8:
                score += 10
            else:
                frame2 = list(map(int, frames[i*2+1:i*2+3].split('/')))
                score += 10 + sum(frame2)
        else:
            score += int(frames[i*2])
    return score