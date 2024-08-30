```
def bowling_score(frames):
    score = 0
    frames = frames.replace('/', '')
    for i, frame in enumerate(frames):
        if len(frame) == 1:
            score += 10
        elif 'X' in frame:
            if i < 9:
                score += 30
            else:
                score += 10 + 10 * (int(frame.replace('X', '')) - 2)
        else:
            strike = int(frame[0])
            spare = int(frame[1])
            if i < 9:
                score += strike + spare + 10
            else:
                score += strike + spare
    return score