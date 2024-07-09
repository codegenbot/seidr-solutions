```
def bowling_score(game):
    score = 0
    roll = 0
    frames = game.split('/')
    for frame in frames:
        if len(frame) == 1:
            score += int(frame)
            roll += 1
        elif len(frame) == 2:
            first, second = map(int, frame)
            score += first + second
            roll += 1
        else:
            first, second = map(int, frame[:2])
            score += first + second
            if first + second == 10:
                if roll < 9:
                    if len(frames) > 1 and frames[0] in '12':
                        score += int(frames.pop(0))
                    else:
                        score += 10
                else:
                    score += 10
            elif len(frames) >= 2 and frames[0][0] == str(first + second + 1):
                score += int(frames.pop(0)) + first + second
            roll += 1
    return score