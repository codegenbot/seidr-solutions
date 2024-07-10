def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += int(frame)
            roll += 1
        elif len(frame) == 2:
            score += int(frame[0]) + int(frame[1])
            roll += 1
        else:
            strike = True
            for i in frame:
                if i != "X":
                    score += int(i)
                    if strike:
                        score += int(i)
                    strike = False
            roll += 3
    return score