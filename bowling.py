```
def bowling_score(game):
    score = 0
    roll = 0
    frames = game.split('/')
    for frame in frames:
        if len(frame) == 1:
            score += int(frame)
            roll += 1
        elif len(frame) > 1 and len(frame) <= 2:
            strike = int(frame[0]) + int(frame[1])
            score += strike
            roll += 1
            while roll < 10:
                if frames[roll].isdigit():
                    score += int(frames[roll])
                    roll += 1
                else:
                    break
        elif len(frame) > 2:
            spare = int(frame[0]) + int(frame[1])
            score += spare
            roll += 1
            while roll < 10 and frames[roll].isdigit():
                score += int(frames[roll])
                roll += 1
    return score