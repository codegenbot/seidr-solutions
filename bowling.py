def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split("/")):
        if len(frame) == 1 and i < 9:  # X or / is a strike or spare
            if i < 9:
                score += 10 + (10 - 1) * min(int(frames[i + 1]), 2)
        else:
            score += sum(map(int, frame))
    return score