def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += 10 + (10 - int(frame)) * 2
            roll += 2
        elif len(frame) > 1:
            if int(frame[0]) == 10:
                score += 10 + (int(frame[1:]) or 10) * 2
                roll += 2
            else:
                score += sum(int(c) for c in frame)
                roll += len(frame)
    return score