```
def bowling_score(frames):
    score = 0
    frame = 1
    for x in frames:
        if x == 'X':
            score += 30
            frame -= 1
        elif x == '/':
            score += 10 + int(frames[frames.index(x) - 1]) * 10
            frame -= 1
        else:
            score += int(x)
    return score