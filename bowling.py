```
def bowling_score(frames):
    score = 0
    frame = 0
    for bowl in frames:
        if bowl == 'X':
            score += 30
            frame += 1
        elif bowl == '/':
            score += 10 + int(frames[frames.index(bowl) - 1]) + int(frames[frames.index(bowls) - 2])
            frame += 1
        else:
            if len(bowl) > 1:
                score += 10 + int(bowl[:-1])
            else:
                score += int(bowl)
            frame += 1
    return score