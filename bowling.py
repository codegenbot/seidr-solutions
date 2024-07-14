def bowling_score(frames):
    score = 0
    for frame in frames.split("/"):
        if len(frame) == 1 or (len(frame) > 1 and int(frame[0]) < 10):
            score += sum(map(int, frame))
        else:
            if len(frame) > 1:
                score += 10 + sum(map(int, frame[1:]))
            else:
                score += 10
    return score