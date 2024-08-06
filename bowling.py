```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i*2:i*2+2]:
            x1, x2 = map(int, re.findall('\d', frames[i*2:i*2+2]))
            if i < 9:
                score += max(x1, 10-x2) + sum(max(0, min(x1, 10)-min(1, x2)) for _ in range(min(x1, 10)-min(1, x2)+1))
        else:
            score += int(frames[i*2:i*2+2]) * 10
    return score