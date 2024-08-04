```
def bowling_score(frames):
    score = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += int(frame)
        elif len(frame) == 2:
            score += int(frame[0]) * 10 + int(frame[1])
        else:
            strike = True
            for i, ball in enumerate(frame):
                if ball != 'X':
                    if strike:
                        score += (10 - i) + int(ball) * 10
                    else:
                        score += int(ball)
                    break
            else:
                score += 10 * len(frame)
    return score