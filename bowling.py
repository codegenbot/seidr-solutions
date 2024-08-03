```
def bowling_score(game):
    score = 0
    frames = [int(x) for x in game.replace('/', '')]
    while len(frames) > 1 or (len(frames) == 1 and frames[0] != 10):
        if sum(frames[:2]) >= 10:
            score += 10 + (9 - sum(frames[:2])) if len(frames) > 1 else 10
            frames = frames[2:] if len(frames) > 1 else []
        elif frames[0] == 10:
            score += 10 + sum(frames[1:])
            frames = frames[2:]
        else:
            if frames[0] + frames[1] < 10:
                score += frames.pop(0)
            else:
                score += 10
                frames[:2] = []
    if len(frames) == 1 and frames[0] == 10:
        score += 10
    return score