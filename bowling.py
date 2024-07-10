```
def bowling_score(game):
    score = 0
    roll = 0
    frames = [list(map(int, frame.split())) for frame in game.split('/')]
    for i, frame in enumerate(frames):
        if len(frame) == 1: 
            score += 10
            roll += 1
            if i < 9:
                score += frames[i+1][0] + frames[i+2][0]
                roll += 2
        elif len(frame) > 2 and frame[1] == 0: 
            score += sum(frame)
            roll += 2
            if i < 9:
                score += frames[i+1][0]
                roll += 1
        else: 
            score += sum(frame)
            roll += 2
    return score