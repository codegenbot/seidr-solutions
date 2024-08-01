```
def bowling_score(frames):
    score = 0
    frame = 1
    for f in frames:
        if f == 'X':
            score += 30
            frame -= 1
        elif f == '/':
            score += 10 + int(frames[frames.index(f) - 1])
            frame -= 1
        else:
            strike = False
            if f == '0' or f == '0/':
                score += 10
                frame -= 1
            else:
                for i in range(1, 4):
                    if str(i) not in f and '/' not in f:
                        score += int(f[0])
                        break
        if frame == 0:
            break
    return score