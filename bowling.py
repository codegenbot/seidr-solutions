```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if i < 9 and frames[i*2+1] == 'X' or (i < 9 and '/' in frames[i*2:i*2+2]):
            if i < 9:
                if frames[(i+1)*2-1].isdigit():
                    score += 10 + int(frames[(i+1)*2-1])
                else:
                    frame = list(map(int, frames[i*2:i*2+3].split('/')))
                    score += 10 + sum(frame)
            else:
                score += 10
        elif 'X' == frames[i*2]:
            if i < 8 and frames[(i+1)*2].isdigit():
                score += 10 + int(frames[(i+1)*2])
            else:
                score += 10
        else:
            score += int(frames[i*2]) + (0 if len(frames) <= i*2+1 else int(frames[i*2+1]))
    return score