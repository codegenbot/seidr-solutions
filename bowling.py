def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += int(frame)
        elif len(frame) == 2:
            score += int(frame[0]) + int(frame[1])
        else:
            if int(frame[0]) + int(frame[1]) < 10:
                score += int(frame[0]) + int(frame[1])
            else:
                roll += int(frame[0]) + int(frame[1])
            if roll > 0:
                score += roll
                roll = 0
    return score