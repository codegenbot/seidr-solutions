def bowling_score(frames):
    score = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += 10
        elif len(frame) == 2:
            score += int(frame[0]) * 10 + 10 - int(frame[0])
        else:
            score += int(frame[0]) * 10 + int(frame[1])
    return score