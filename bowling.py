```
def bowling_score(frames):
    score = 0
    frame = 1
    for bowl in frames:
        if bowl == 'X':
            score += 30
            frame -= 1
        elif bowl == '/':
            strike_score = 10 + self.strike_score(frame)
            score += strike_score
            frame -= 1
        else:
            score += int(bowl)
    return score

def strike_score(frame):
    if frame > 2:
        return 0
    if frame == 2:
        return 15
    return 10