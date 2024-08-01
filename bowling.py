```
def bowling_score(frames):
    score = 0
    frame = 1
    for bowl in frames:
        if bowl == 'X':
            score += 30
            frame -= 1
        elif bowl == '/':
            score += 10 + int(frames[frames.index(bowl) - 1])
            frame -= 1
        else:
            score += int(bowl)
    return score