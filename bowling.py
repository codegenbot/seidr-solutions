def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split("/"):
        if len(frame) > 1 and int(frame[0]) == 10:
            if len(frame) == 2:
                score += 10 + int(frame[1])
            else:
                score += 10
                roll += int(frame[1])
        elif len(frame) > 1:
            score += int(frame[0]) + int(frame[1])
        else:
            score += int(frame)
    if roll != 0:
        while roll > 0 and roll < 15:
            roll += int(frames.split("/")[int(len(frames.split("/")) - 1)])
    return score