def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += int(frame)
        elif len(frame) == 2:
            score += int(frame[0]) + int(frame[1])
        else:
            strike = True
            while strike:
                if roll < 2:
                    score += 10
                    roll += 1
                else:
                    strike = False
        roll = 0
    return score