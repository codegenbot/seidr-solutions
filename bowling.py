```
def bowling_score(s):
    score = 0
    roll = 0
    frames = [0] * 10
    for c in s:
        if c.isdigit():
            if c == 'X':
                score += 10 + (10 - roll)
                roll = 0
                frames[frames.index(0)] = 10
            elif c == '/':
                score += 10 - int(c)
                roll = 0
                frames[frames.index(0)] = 10 - int(c)
            else:
                if roll + int(c) > 10:
                    score += 10
                    roll = 0
                else:
                    roll += int(c)
    for i in range(1, len(frames)):
        score += frames[i]
    return score