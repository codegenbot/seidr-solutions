def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += int(frame)
        elif len(frame) == 2:
            score += int(frame[0]) + int(frame[1])
        else:
            score += 10
            roll += 1
            if roll < 9 and frames[frames.index(frame) + 1].isdigit():
                score += int(frames[frames.index(frame) + 1])
    return score