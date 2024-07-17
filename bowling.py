```
def bowling_score(frames):
    score = 0
    frame = 1
    for f in frames:
        if f == 'X':
            score += 30
            frame -= 1
        elif f == '/':
            score += 10 + int(frames[frames.index(f) - 1].strip('/')) * 10
            frame -= 1
        else:
            score += int(f)
    return score