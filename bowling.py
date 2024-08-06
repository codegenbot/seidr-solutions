def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += int(frame)
        elif len(frame) == 2:
            if int(frame[0]) + int(frame[1]) >= 10:
                score += int(frame[0]) + int(frame[1])
            else:
                score += 10
        else:
            score += 10 + int(frame[0]) + int(frame[1])
    return score