def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split("/")):
        if len(frame) == 1:
            score += 10 + (10 - int(frame)) * 2
        elif len(frame) > 1 and frame[0] != "X":
            score += sum(map(int, frame))
        else:
            if i < 9:
                score += 30
            else:
                score += 10 + int(frame[1:])
    return score