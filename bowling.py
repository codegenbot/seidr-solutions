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
            if i < 8:
                next_frame = frames[(i + 1) * 2:(i + 2) * 2]
                if '/' in next_frame:
                    next_frame = list(map(int, next_frame.split('/')))
                    score += 10 + sum(next_frame)
                else:
                    score += 10 + int(next_frame[0])
            else:
                score += 10
        else:
            score += int(frames[i*2]) + (int(frames[i*2+1]) if i < 9 else 0)
    return score